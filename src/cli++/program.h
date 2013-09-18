/* This is free and unencumbered software released into the public domain. */

#ifndef CLIXX_PROGRAM_H
#define CLIXX_PROGRAM_H

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
   * @pre `argc` must greater than zero
   * @pre `argv` must not be `nullptr`
   */
  program(int argc, char* argv[]) noexcept;

  /**
   * Copy constructor.
   */
  program(const program& other) noexcept = delete;

  /**
   * Move constructor.
   */
  program(program&& other) noexcept = default;

  /**
   * Destructor.
   */
  ~program() noexcept = default;

  /**
   * Copy assignment operator.
   */
  program& operator=(program other) noexcept = delete;

  /**
   * Move assignment operator.
   */
  program& operator=(program&& other) noexcept = default;

protected:
  unsigned int _argc;
  char** _argv;
};

#endif /* CLIXX_PROGRAM_H */
