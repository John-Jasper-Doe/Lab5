/**
 *  @file controller.cpp
 *  @brief Implementation of the controller class.
 */


#include "controller.hpp"
#include "primitives/creator.hpp"
#include <assert.h>

namespace svg::core {

const common::elem_type_t SHIFT_DEFAULT = 10;

controller::controller(std::shared_ptr<base_model<common::elem_type_t> > model)
  : model_(model), creator_(std::make_unique<primitives::creator>()) {
  assert(model_);
}

void controller::set_color(color_tag_t color) {
  model_->set_color(color);
}

void controller::set_tool(tool_tag_t tool) {
  model_->set_tool(tool);
}

void controller::canvas_click(const point_t<common::elem_type_t>& p) {
  switch (model_->tool()) {
    case common::tool_tag::dot:
      model_->add_element(creator_->create_dot(p, model_->color()));
      break;

    case common::tool_tag::line:
      model_->add_element(creator_->create_line(p, p + SHIFT_DEFAULT, model_->color()));
      break;

    case common::tool_tag::rect:
      model_->add_element(creator_->create_rect(p, p + SHIFT_DEFAULT, model_->color()));
      break;

    case common::tool_tag::circle:
      model_->add_element(creator_->create_circle(p, SHIFT_DEFAULT, model_->color()));
      break;

    case common::tool_tag::eraser:
      model_->delete_element(p);
      break;

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
