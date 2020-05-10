/**
 *  @file point.hpp
 *  @brief Definition on the point class
 */


#ifndef PRIMITIVES_POINT_HPP_
#define PRIMITIVES_POINT_HPP_

#include <type_traits>

namespace svg {
namespace primitives {

template <class T>
struct point {
  static_assert (std::is_integral_v<T>, "Is not integral type");

  T x;
  T y;
};

} /* primitives:: */

template <class T>
using point_t = svg::primitives::point<T>;

template <class T>
point_t<T> operator+(const point_t<T>& src, T value) {
  return point_t<T>{ src.x + value, src.y + value };
}

template <class T>
point_t<T> operator-(const point_t<T>& src, T value) {
  return point_t<T>{ src.x - value, src.y - value };
}

} /* svg:: */

#endif /* PRIMITIVES_POINT_HPP_ */
