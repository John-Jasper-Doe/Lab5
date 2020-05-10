/**
 *  @file controller.cpp
 *  @brief Implementation of the controller class.
 */


#include "controller.hpp"
#include "primitives/dot.hpp"
#include <assert.h>

namespace svg::core {

controller::controller(std::shared_ptr<base_model<using_type_t> > model)
  : model_(model) {
  assert(model_);
}

void controller::set_color(color_tag_t color) {
  model_->set_color(color);
}

void controller::set_tool(tool_tag_t tool) {
  model_->set_tool(tool);
}

void controller::canvas_click(const point_t<using_type_t>&) {
  switch (model_->tool()) {
    case common::tool_tag::dot:
      model_->add_element(std::make_unique<svg::primitives::dot<using_type_t>>(
                            svg::point_t<using_type_t>{ 2, 4 },
                            common::color_tag::red));
      break;

    default:
      throw std::runtime_error("Unsupported tool");
  }
}

void controller::open(const std::string& path) {
  model_->open(path);
}

void controller::clear() {
  model_->clear();
}

void controller::save() const {
  model_->save();
}


} /* svg::core:: */
