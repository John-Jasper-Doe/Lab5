/**
 *  @file creator.cpp
 *  @brief Implementation of the creator class.
 */


#include "creator.hpp"

namespace svg {
namespace primitives {

std::unique_ptr<dot<common::elem_type_t>> creator::create_dot(
    point_t<common::elem_type_t> p0, color_tag_t color) {
  logger_.info("The Dot tool has been created");
  return std::make_unique<dot<common::elem_type_t>>(p0, color);
}

std::unique_ptr<line<common::elem_type_t>> creator::create_line(
    point_t<common::elem_type_t> p0, point_t<common::elem_type_t> p1,
    color_tag_t color) {
  logger_.info("The Line tool has been created");
  return std::make_unique<line<common::elem_type_t>>(p0, p1, color);
}

std::unique_ptr<rect<common::elem_type_t>> creator::create_rect(
    point_t<common::elem_type_t> p0, point_t<common::elem_type_t> p1,
    color_tag_t color) {
  logger_.info("The Rectangle tool has been created");
  return std::make_unique<rect<common::elem_type_t>>(p0, p1, color);
}

std::unique_ptr<circle<common::elem_type_t>> creator::create_circle(
    point_t<common::elem_type_t> p0, common::elem_type_t r, color_tag_t color) {
  logger_.info("The Circle tool has been created");
  return std::make_unique<circle<common::elem_type_t>>(p0, r, color);
}

} /* primitives:: */
} /* svg:: */
