/**
 *  @file basectrl.hpp
 *  @brief Description of the base controller interface.
 */


#ifndef CORE_BASECTRL_HPP_
#define CORE_BASECTRL_HPP_

#include "common/tags.hpp"
#include "primitives/point.hpp"
#include <string>


namespace svg::core {

template <class T>
class base_controller {
public:
  virtual ~base_controller() = default;

  virtual void set_color(color_tag_t color) = 0;
  virtual void set_tool(tool_tag_t tool) = 0;

  virtual void canvas_click(const point_t<T>&) = 0;

  virtual void open(const std::string& path)  = 0;
  virtual void clear() = 0;
  virtual void save() const = 0;
};

} /* svg::core:: */

#endif /* CORE_BASECTRL_HPP_ */
