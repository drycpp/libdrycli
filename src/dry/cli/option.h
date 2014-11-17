/* This is free and unencumbered software released into the public domain. */

#ifndef DRY_CLI_OPTION_H
#define DRY_CLI_OPTION_H

#include <functional> /* for std::function */

namespace dry {
  namespace cli {
    struct option;
    enum class option_argument : int;
    using option_handler = std::function<void (int, const char*)>;
  }
}

/**
 * CLI option.
 *
 * This structure is compatible with `struct option` from `<getopt.h>`.
 */
struct dry::cli::option {
  const char* name;
  option_argument has_argument;
  int* flag;
  int value;
};

enum class dry::cli::option_argument : int {
  none     = 0, /* no_argument */
  required = 1, /* required_argument */
  optional = 2, /* optional_argument */
};

#endif /* DRY_CLI_OPTION_H */
