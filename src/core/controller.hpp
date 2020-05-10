/**
 *  @file controller.hpp
 *  @brief Description of the controller class.
 */


#ifndef CORE_CONTROLLER_HPP_
#define CORE_CONTROLLER_HPP_

#include "basectrl.hpp"
#include "basemodel.hpp"

namespace svg::core {

class controller : public base_controller<using_type_t> {
  std::shared_ptr<base_model<using_type_t>> model_;

public:
  explicit controller(std::shared_ptr<base_model<using_type_t>> model);

  virtual void set_color(color_tag_t color) override;
  virtual void set_tool(tool_tag_t tool) override;

  virtual void canvas_click(const point_t<using_type_t>&) override;

  virtual void open(const std::string& path) override;
  virtual void clear() override;
  virtual void save() const override;
};

} /* svg::core:: */

#endif /* CORE_CONTROLLER_HPP_ */
