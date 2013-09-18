/* This is free and unencumbered software released into the public domain. */

#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#include "program.h"

#include <cassert> /* for assert() */

using namespace cli;

program::program(int argc,
                 char* argv[]) noexcept
  : _argc(argc),
    _argv(argv) {

  assert(argc > 0);
  assert(argv != nullptr);
}
