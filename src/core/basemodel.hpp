/**
 *  @file basemodel.h
 *  @brief Description of the base model interface.
 */


#ifndef CORE_BASEMODEL_HPP_
#define CORE_BASEMODEL_HPP_

#include "common/observer.hpp"
#include <memory>


namespace svg::core {

class base_model : public common::observer<> {
public:
  virtual void /* return color */ color() const = 0;
  virtual void set_color(int /* set color */ color) = 0;

  virtual void /* return tool */ tool() const = 0;
  virtual void set_tool(int /* set tool */ tag) = 0;

  virtual void add_element(/* add geometry element */) = 0;
  virtual void delete_element(int x, int y) = 0;

  virtual void open(const std::string& path)  = 0;
  virtual void clear() = 0;
  virtual void save() const = 0;

  virtual const std::list<int /* geometry elements */>& elements() const = 0;
};

} /* svg::core:: */

#endif /* CORE_BASEMODEL_HPP_ */
