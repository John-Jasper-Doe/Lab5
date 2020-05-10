/**
 *  @file basecreator.hpp
 *  @brief Description of the base creator interface.
 */


#ifndef PRIMITIVES_BASECREATOR_HPP_
#define PRIMITIVES_BASECREATOR_HPP_

#include "point.hpp"
#include "common/tags.hpp"
#include <memory>

namespace svg::primitives {

/* Forward declaration */
template <class T>
class dot;

template <class T>
class line;

template <class T>
class rect;

template <class T>
class circle;


template <class T>
class base_creator {
public:
  virtual ~base_creator() = default;

  virtual std::unique_ptr<dot<T>> create_dot(point_t<T> p0, color_tag_t color) = 0;
  virtual std::unique_ptr<line<T>> create_line(point_t<T> p0, point_t<T> p1, color_tag_t color) = 0;
  virtual std::unique_ptr<rect<T>> create_rect(point_t<T> p0, point_t<T> p1, color_tag_t color) = 0;
  virtual std::unique_ptr<circle<T>> create_circle(point_t<T> p0, T r, color_tag_t color) = 0;
};

} /* svg::primitives:: */

#endif /* PRIMITIVES_BASECREATOR_HPP_ */
