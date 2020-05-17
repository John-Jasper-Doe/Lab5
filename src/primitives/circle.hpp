/**
 *  @file circle.hpp
 *  @brief Definition on the circle class
 */


#ifndef PRIMITIVES_CIRCLE_HPP_
#define PRIMITIVES_CIRCLE_HPP_

#include "point.hpp"
#include "elements.hpp"
#include "utils/logger.hpp"

namespace svg {
namespace primitives {

template <typename T>
class circle : public element<T> {
  point_t<T> point0_;
  T radius_;
  utils::logger logger_{ "Circle" };

public:
  explicit circle(const point_t<T>& p0, const T r, color_tag_t color) noexcept
    : element<T>(color), point0_{ p0.x, p0.y }, radius_{ r }
  { logger_.info("Created"); }

  ~circle() = default;

  circle() = delete;
  circle(const circle<T>&) = delete;
  circle(circle<T>&&) = delete;

  circle<T> operator=(const circle<T>&) = delete;
  circle<T> operator=(circle<T>&&) = delete;

  void draw() override { /* some work */ logger_.info("Drawed"); }
  T x() const override { return point0_.x; }
  T y() const override { return point0_.y; }
};

} /* primitives:: */
} /* svg:: */

#endif /* PRIMITIVES_CIRCLE_HPP_ */
