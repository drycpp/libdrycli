/* This is free and unencumbered software released into the public domain. */

#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#include "option.h"

#include <getopt.h> /* for struct option */

using namespace cli;

static_assert(sizeof(cli::option) == sizeof(struct ::option),
  "sizeof(cli::option) != sizeof(struct ::option)");

static_assert(static_cast<int>(option_argument::none) == no_argument,
  "cli::option_argument::none != no_argument");

static_assert(static_cast<int>(option_argument::required) == required_argument,
  "cli::option_argument::required != required_argument");

static_assert(static_cast<int>(option_argument::optional) == optional_argument,
  "cli::option_argument::optional != optional_argument");
