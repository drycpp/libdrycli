/* This is free and unencumbered software released into the public domain. */

#ifndef DRY_CLI_ARGUMENTS_H
#define DRY_CLI_ARGUMENTS_H

#include <string> /* for std::string */
#include <deque>  /* for std::deque */

namespace dry {
  namespace cli {
    using arguments = std::deque<std::string>;
  }
}

#endif /* DRY_CLI_ARGUMENTS_H */
