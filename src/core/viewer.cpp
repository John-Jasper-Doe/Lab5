/**
 *  @file viewer.cpp
 *  @brief Implementation of the viewer class.
 */

#include "viewer.hpp"

namespace svg::core {

viewer::viewer(std::shared_ptr<svg::core::base_model<common::elem_type_t>> model,
               std::shared_ptr<svg::core::base_controller<common::elem_type_t>> ctrl) noexcept
  : model_(model) {
  model_->add_listener([this]() { this->redraw(); });

  canvas_.append([ctrl](const point_t<common::elem_type_t>& p) { ctrl->canvas_click(p); });

  btn_open_.append([ctrl](const std::string& path) { ctrl->open(path); });
  btn_save_.append([ctrl]() { ctrl->save(); });
  btn_clear_.append([ctrl]() { ctrl->clear(); });

  auto tool_selecter = [ctrl](gui::btn_tool btn) {
    return [ctrl, btn]() { ctrl->set_tool(btn.tool()); };
  };
  btn_dot_.append(tool_selecter(btn_dot_));
  btn_line_.append(tool_selecter(btn_line_));
  btn_rect_.append(tool_selecter(btn_line_));
  btn_circle_.append(tool_selecter(btn_line_));
  btn_eraser_.append(tool_selecter(btn_line_));

  auto color_selecter = [ctrl](gui::btn_color btn) {
    return [ctrl, btn]() { ctrl->set_color(btn.color()); };
  };
  btn_red_.append(color_selecter(btn_red_));
  btn_blue_.append(color_selecter(btn_red_));
  btn_green_.append(color_selecter(btn_red_));
  btn_yellow_.append(color_selecter(btn_red_));
  btn_white_.append(color_selecter(btn_red_));
  btn_black_.append(color_selecter(btn_red_));
}

void viewer::redraw() {
  for (const auto& elem : model_->elements()) {
    elem->draw();
  }

  logger_.info("Redrawed");
}

} /* svg::core:: */
