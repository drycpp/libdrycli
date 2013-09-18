/* This is free and unencumbered software released into the public domain. */

#ifndef CLIXX_H
#define CLIXX_H

/**
 * libcli++
 */

#include "cli++/arguments.h"
#include "cli++/environment.h"
#include "cli++/feature.h"
#include "cli++/module.h"
#include "cli++/option.h"
#include "cli++/program.h"
#include "cli++/version.h"

namespace cli {
  using exit_code = int; // TODO: make this into an enum.
}

#endif /* CLIXX_H */
