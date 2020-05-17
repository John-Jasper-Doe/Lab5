/**
 * @file logger.h
 * @brief Simple logger class.
 */


#ifndef UTILS_LOGGER_HPP_
#define UTILS_LOGGER_HPP_

#include <string>

namespace svg {
namespace utils {

class logger {
  std::string loc_{ "" };

public:
  explicit logger(const std::string& loc) noexcept;
  void info(const std::string& msg) const noexcept;
};

} /* utils:: */
} /* svg:: */

#endif /* UTILS_LOGGER_HPP_ */
