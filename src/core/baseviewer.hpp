/**
 *  @file baseviewer.hpp
 *  @brief Description of the base viewer interface.
 */


#ifndef CORE_BASEVIEWER_HPP_
#define CORE_BASEVIEWER_HPP_

namespace svg {
namespace core {

class base_viewer {
public:
  virtual ~base_viewer() = default;
  virtual void redraw() = 0;
};

} /* core:: */
} /* svg:: */

#endif /* CORE_BASEVIEWER_HPP_ */
