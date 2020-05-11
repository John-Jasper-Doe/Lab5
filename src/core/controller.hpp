/**
 *  @file controller.hpp
 *  @brief Description of the controller class.
 */


#ifndef CORE_CONTROLLER_HPP_
#define CORE_CONTROLLER_HPP_

#include "basectrl.hpp"
#include "basemodel.hpp"
#include "primitives/basecreator.hpp"
#include "common/common.hpp"

namespace svg {
namespace core {

class controller : public base_controller<common::elem_type_t> {
  std::shared_ptr<base_model<common::elem_type_t>> model_;
  std::shared_ptr<primitives::base_creator<common::elem_type_t>> creator_;

public:
  explicit controller(std::shared_ptr<base_model<common::elem_type_t>> model);

  void set_color(color_tag_t color) override;
  void set_tool(tool_tag_t tool) override;

  void canvas_click(const point_t<common::elem_type_t>& p) override;

  void open(const std::string& path) override;
  void clear() override;
  void save() const override;
};

} /* core:: */
} /* svg:: */

#endif /* CORE_CONTROLLER_HPP_ */
