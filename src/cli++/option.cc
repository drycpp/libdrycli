/* This is free and unencumbered software released into the public domain. */

#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#include "option.h"

#include <getopt.h> /* for struct option */

static_assert(sizeof(cli::option) == sizeof(struct ::option),
  "sizeof(cli::option) != sizeof(struct ::option)");
