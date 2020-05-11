/**
 * @file logger.cpp
 * @brief Implementation of logger.
*/

#include "logger.hpp"
#include <iostream>

namespace svg::utils {

logger::logger(const std::string& loc) noexcept
  : loc_(loc)
{ }

void logger::info(const std::string& msg) const noexcept {
  std::cout << loc_ << ">>> : " << msg << std::endl;
}

} /* svg::utils:: */
