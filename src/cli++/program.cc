/* This is free and unencumbered software released into the public domain. */

#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#include "option.h"
#include "program.h"

#include <cassert>  /* for assert() */
#include <cctype>   /* for std::isalnum() */
#include <unistd.h> /* for getopt() */

#ifdef HAVE_GETOPT_H
#include <getopt.h> /* for getopt_long() */
#endif

using namespace cli;

program::program(int argc, char* argv[]) noexcept {
  assert(argc > 0);
  assert(argv != nullptr);

  for (int i = 1; i < argc; i++) {
    args.push_back(argv[i]);
  }
}

program::program(int argc, char* argv[],
                 const option* const opts) noexcept
  : program(argc, argv, opts, nullptr) {}

program::program(int argc, char* argv[],
                 const option* const opts,
                 option_handler callback) noexcept {
  assert(argc > 0);
  assert(argv != nullptr);
  assert(opts != nullptr);

  std::string short_opts(":");

  {
    const option* opt = opts;
    while (opt->name) {
      if (std::isalnum(opt->value)) {
        switch (opt->has_argument) {
          case option_argument::none:
            short_opts.push_back(opt->value);
            break;
          case option_argument::required:
            short_opts.push_back(opt->value);
            short_opts.push_back(':');
            break;
          case option_argument::optional:
            short_opts.push_back(opt->value);
            short_opts.push_back(':');
            short_opts.push_back(':');
            break;
          default:
            break;
        }
      }
      opt++;
    }
  }

  int opt;
#ifdef HAVE_GETOPT_LONG
  const auto long_opts = reinterpret_cast<const struct ::option*>(opts);
  while ((opt = getopt_long(argc, argv, short_opts.c_str(), long_opts, nullptr)) != -1) {
    if (callback) {
      callback(opt, optarg);
    }
  }
#else
  while ((opt = getopt(argc, argv, short_opts.c_str())) != -1) {
    if (callback) {
      callback(opt, optarg);
    }
  }
#endif /* HAVE_GETOPT_LONG */

  argc -= optind;
  argv += optind;

  for (int i = 0; i < argc; i++) {
    args.push_back(argv[i]);
  }
}
