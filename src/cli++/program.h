/* This is free and unencumbered software released into the public domain. */

#ifndef CLIXX_PROGRAM_H
#define CLIXX_PROGRAM_H

#include "arguments.h"
#include "environment.h"
#include "option.h"

namespace cli {
  class program;
}

/**
 * CLI program.
 *
 * @note Instances of this class are movable, but not copyable.
 */
class cli::program {
public:
  /**
   * Default constructor.
   */
  program() noexcept = delete;

  /**
   * Constructor.
   *
   * @param argc the argument count
   * @param argv the argument vector
   * @pre `argc` must greater than zero
   * @pre `argv` must not be `nullptr`
   */
  program(int argc, char* argv[]) noexcept;
  program(int argc, char* argv[], const option* opts) noexcept;
  program(int argc, char* argv[], const option* opts, option_handler callback) noexcept;

  /**
   * Copy constructor.
   */
  program(const program& other) noexcept = delete;

  /**
   * Move constructor.
   */
  program(program&& other) = default;

  /**
   * Destructor.
   */
  ~program() noexcept = default;

  /**
   * Copy assignment operator.
   */
  program& operator=(const program& other) noexcept = delete;

  /**
   * Move assignment operator.
   */
  program& operator=(program&& other) = default;

public:
  /**
   * The program's environment variables.
   */
  const environment env;

  /**
   * The program's command-line arguments.
   */
  arguments args;
};

#endif /* CLIXX_PROGRAM_H */
