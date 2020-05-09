/**
 *  @file dot.hpp
 *  @brief Definition on the dot element class
 */


#ifndef PRIMITIVES_DOT_HPP_
#define PRIMITIVES_DOT_HPP_

#include "point.hpp"
#include "elements.hpp"

namespace svg::primitives {

template <typename T>
class dot : public element<T> {
  point_t<T> point_;

public:
  explicit dot(const point_t<T>& point, color_tag_t color) noexcept
    : element<T>(color), point_{ point.x, point.y }
  { }

  ~dot() = default;

  dot() = delete;
  dot(const dot<T>&) = delete;
  dot(dot<T>&&) = delete;

  dot<T> operator=(const dot<T>&) = delete;
  dot<T> operator=(dot<T>&&) = delete;

  void draw() override { /* some work */ }
  T x() const override { return point_.x; }
  T y() const override { return point_.y; }
};

} /* svg::primitives:: */

#endif /* PRIMITIVES_DOT_HPP_ */
