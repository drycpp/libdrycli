/* This is free and unencumbered software released into the public domain. */

#ifndef CLIXX_OPTION_H
#define CLIXX_OPTION_H

#include <functional> /* for std::function */

namespace cli {
  struct option;
  using option_handler = std::function<void (int, const char*)>;
}

/**
 * CLI option.
 *
 * This structure is compatible with `struct option` from `<getopt.h>`.
 */
struct cli::option {
  const char* name;
  int has_argument;
  int* flag;
  int value;
};

#endif /* CLIXX_OPTION_H */
