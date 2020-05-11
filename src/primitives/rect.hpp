/**
 *  @file rect.hpp
 *  @brief Definition on the rct class
 */


#ifndef PRIMITIVES_RECT_HPP_
#define PRIMITIVES_RECT_HPP_

#include "point.hpp"
#include "elements.hpp"
#include "utils/logger.hpp"

namespace svg {
namespace primitives {

template <typename T>
class rect : public element<T> {
  point_t<T> point0_;
  point_t<T> point1_;
  utils::logger logger_{ "Rectangle" };

public:
  explicit rect(const point_t<T>& p0, const point_t<T>& p1, color_tag_t color) noexcept
    : element<T>(color), point0_{ p0.x, p0.y }, point1_{ p1.x, p1.y }
  { logger_.info("Created"); }

  ~rect() = default;

  rect() = delete;
  rect(const rect<T>&) = delete;
  rect(rect<T>&&) = delete;

  rect<T> operator=(const rect<T>&) = delete;
  rect<T> operator=(rect<T>&&) = delete;

  void draw() override { /* some work */ logger_.info("Drawed"); }
  T x() const override { return point0_.x; }
  T y() const override { return point0_.y; }
};

} /* primitives:: */
} /* svg:: */

#endif /* PRIMITIVES_RECT_HPP_ */
