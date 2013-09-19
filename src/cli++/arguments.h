/* This is free and unencumbered software released into the public domain. */

#ifndef CLIXX_ARGUMENTS_H
#define CLIXX_ARGUMENTS_H

#include <string> /* for std::string */
#include <deque>  /* for std::deque */

namespace cli {
  using arguments = std::deque<std::string>;
}

#endif /* CLIXX_ARGUMENTS_H */
