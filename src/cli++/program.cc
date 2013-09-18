/* This is free and unencumbered software released into the public domain. */

#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#include "option.h"
#include "program.h"

#include <cassert>  /* for assert() */
#include <cctype>   /* for std::isalnum() */

#ifdef HAVE_GETOPT_H
#include <getopt.h> /* for getopt_long() */
#endif

using namespace cli;

program::program(int argc,
                 char* argv[],
                 const option* const opts) noexcept {

  assert(argc > 0);
  assert(argv != nullptr);

  if (opts) {
#ifdef HAVE_GETOPT_LONG
    std::string short_opts(":");

    {
      const option* opt = opts;
      while (opt->name) {
        if (std::isalnum(opt->value)) {
          switch (opt->has_argument) {
            case required_argument:
              short_opts.push_back(opt->value);
              short_opts.push_back(':');
              break;
            case optional_argument:
              short_opts.push_back(opt->value);
              short_opts.push_back(':');
              short_opts.push_back(':');
              break;
            case no_argument:
            default:
              break;
          }
        }
        opt++;
      }
    }

    const auto long_opts = reinterpret_cast<const struct ::option*>(opts);

    int opt;
    while ((opt = getopt_long(argc, argv, short_opts.c_str(), long_opts, nullptr)) != -1) {
      if (true) {
        // TODO
      }
    }

    argc -= optind;
    argv += optind;
#endif /* HAVE_GETOPT_LONG */
  }

  args.reserve(argc - 1);
  for (int i = 1; i < argc; i++) {
    args.push_back(argv[i]);
  }
}
