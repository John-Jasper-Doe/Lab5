/**
 *  @file elements.hpp
 *  @brief Description of the interface of geometric elements.
 */


#ifndef PRIMITIVES_ELEMENTS_HPP_
#define PRIMITIVES_ELEMENTS_HPP_


#include "common/tags.hpp"

namespace svg {
namespace primitives {

template <typename T>
class element {
  color_tag_t tag_;

public:
  explicit element(color_tag_t tag) noexcept : tag_{ tag } { }
  virtual void draw() = 0;
  virtual T x() const = 0;
  virtual T y() const = 0;

  virtual ~element() = default;
};

} /* primitives:: */

template <typename T>
using element_t = svg::primitives::element<T>;

} /* svg:: */


#endif /* PRIMITIVES_ELEMENTS_HPP_ */
