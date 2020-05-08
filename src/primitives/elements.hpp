/**
 *  @file elements.hpp
 *  @brief Description of the interface of geometric elements.
 */


#ifndef PRIMITIVES_ELEMENTS_HPP_
#define PRIMITIVES_ELEMENTS_HPP_


#include "common/tags.hpp"

namespace svg::primitives {

class element {
  color_tag_t tag_;

public:
  explicit element(color_tag_t tag);
  virtual void draw() = 0;
  virtual int getX() = 0;
  virtual int getY() = 0;

  virtual ~element() = default;
};

} /* svg::primitives:: */


#endif /* PRIMITIVES_ELEMENTS_HPP_ */
