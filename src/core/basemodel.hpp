/**
 *  @file basemodel.hpp
 *  @brief Description of the base model interface.
 */


#ifndef CORE_BASEMODEL_HPP_
#define CORE_BASEMODEL_HPP_

#include "common/observer.hpp"
#include "common/tags.hpp"
#include "primitives/point.hpp"
#include "primitives/elements.hpp"
#include <memory>


namespace svg::core {

template <class T>
class base_model : protected common::observer<> {
public:
  virtual ~base_model() = default;

  virtual color_tag_t color() const = 0;
  virtual void set_color(color_tag_t color) = 0;

  virtual tool_tag_t tool() const = 0;
  virtual void set_tool(tool_tag_t tool) = 0;

  virtual void add_element(std::unique_ptr<element_t<T>>&&) = 0;
  virtual void delete_element(const point_t<T>&) = 0;

  virtual void open(const std::string& path)  = 0;
  virtual void clear() = 0;
  virtual void save() const = 0;

  virtual const std::list<std::unique_ptr<element_t<T>>>& elements() const = 0;
};

} /* svg::core:: */

#endif /* CORE_BASEMODEL_HPP_ */
