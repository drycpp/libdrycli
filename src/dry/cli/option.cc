/* This is free and unencumbered software released into the public domain. */

#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#include "option.h"

#include <getopt.h> /* for struct option */

using namespace dry::cli;

static_assert(sizeof(dry::cli::option) == sizeof(struct ::option),
  "sizeof(dry::cli::option) != sizeof(struct ::option)");

static_assert(static_cast<int>(option_argument::none) == no_argument,
  "dry::cli::option_argument::none != no_argument");

static_assert(static_cast<int>(option_argument::required) == required_argument,
  "dry::cli::option_argument::required != required_argument");

static_assert(static_cast<int>(option_argument::optional) == optional_argument,
  "dry::cli::option_argument::optional != optional_argument");
