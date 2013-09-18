/* This is free and unencumbered software released into the public domain. */

#ifndef CLIXX_H
#define CLIXX_H

/**
 * libcli++
 */

#include "cli++/feature.h"
#include "cli++/module.h"
#include "cli++/version.h"

#include <map>    /* for std::map */
#include <string> /* for std::string */
#include <vector> /* for std::vector */

namespace cli {
  using exit_code   = int; // TODO: make this into an enum.
  using arguments   = std::vector<std::string>;
  using environment = std::map<std::string, std::string>;
}

#endif /* CLIXX_H */
