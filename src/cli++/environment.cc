/* This is free and unencumbered software released into the public domain. */

#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#include "environment.h"

#include <cassert> /* for assert() */
#include <cstdlib> /* for std::getenv() */

using namespace cli;

environment::environment() noexcept
  : _getenv(std::getenv) {

  assert(__getenv != nullptr);
}
