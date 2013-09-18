/* This is free and unencumbered software released into the public domain. */

#ifndef CLIXX_OPTION_H
#define CLIXX_OPTION_H

#include <functional> /* for std::function */

namespace cli {
  struct option;
  enum class option_argument : int;
  using option_handler = std::function<void (int, const char*)>;
}

/**
 * CLI option.
 *
 * This structure is compatible with `struct option` from `<getopt.h>`.
 */
struct cli::option {
  const char* name;
  option_argument has_argument;
  int* flag;
  int value;
};

enum class cli::option_argument : int {
  none     = 0, /* no_argument */
  required = 1, /* required_argument */
  optional = 2, /* optional_argument */
};

#endif /* CLIXX_OPTION_H */
