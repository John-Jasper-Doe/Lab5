/**
 *  @file line.hpp
 *  @brief Definition on the line class
 */


#ifndef PRIMITIVES_LINE_HPP_
#define PRIMITIVES_LINE_HPP_

#include "point.hpp"
#include "elements.hpp"
#include "utils/logger.hpp"

namespace svg {
namespace primitives {

template <typename T>
class line : public element<T> {
  point_t<T> point0_;
  point_t<T> point1_;
  utils::logger logger_{ "Line" };

public:
  explicit line(const point_t<T>& p0, const point_t<T>& p1, color_tag_t color) noexcept
    : element<T>(color), point0_{ p0.x, p0.y }, point1_{ p1.x, p1.y }
  { logger_.info("Created"); }

  ~line() = default;

  line() = delete;
  line(const line<T>&) = delete;
  line(line<T>&&) = delete;

  line<T> operator=(const line<T>&) = delete;
  line<T> operator=(line<T>&&) = delete;

  void draw() override { /* some work */ logger_.info("Drawed"); }
  T x() const override { return point0_.x; }
  T y() const override { return point0_.y; }
};

} /* primitives:: */
} /* svg:: */

#endif /* PRIMITIVES_LINE_HPP_ */
