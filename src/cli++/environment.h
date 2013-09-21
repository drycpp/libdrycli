/* This is free and unencumbered software released into the public domain. */

#ifndef CLIXX_ENVIRONMENT_H
#define CLIXX_ENVIRONMENT_H

namespace cli {
  class environment;
}

/**
 * CLI environment.
 *
 * @note Instances of this class are movable, but not copyable.
 */
class cli::environment {
public:
  /**
   * Default constructor.
   */
  environment() noexcept;

  /**
   * Copy constructor.
   */
  environment(const environment& other) noexcept = delete;

  /**
   * Move constructor.
   */
  environment(environment&& other) noexcept = default;

  /**
   * Destructor.
   */
  ~environment() noexcept = default;

  /**
   * Copy assignment operator.
   */
  environment& operator=(const environment& other) noexcept = delete;

  /**
   * Move assignment operator.
   */
  environment& operator=(environment&& other) noexcept = default;

protected:
  char* (*_getenv)(const char* name) {nullptr};
};

#endif /* CLIXX_ENVIRONMENT_H */
