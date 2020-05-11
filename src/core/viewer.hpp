/**
 *  @file viewer.hpp
 *  @brief Description of the viewer class.
 */


#ifndef CORE_VIEWER_HPP_
#define CORE_VIEWER_HPP_

#include "baseviewer.hpp"
#include "basemodel.hpp"
#include "basectrl.hpp"
#include "gui/canvas.hpp"
#include "gui/btnopen.hpp"
#include "gui/btnsave.hpp"
#include "gui/btnclear.hpp"
#include "gui/btntool.hpp"
#include "gui/btncolor.hpp"
#include "utils/logger.hpp"
#include <memory>

namespace svg {
namespace core {

class viewer : public svg::core::base_viewer {
  std::shared_ptr<svg::core::base_model<common::elem_type_t>> model_;

  gui::canvas canvas_;

  gui::btn_open btn_open_;
  gui::btn_save btn_save_;
  gui::btn_clear btn_clear_;

  gui::btn_tool btn_dot_ = gui::btn_tool(common::tool_tag::dot);
  gui::btn_tool btn_line_ = gui::btn_tool(common::tool_tag::line);
  gui::btn_tool btn_rect_ = gui::btn_tool(common::tool_tag::rect);
  gui::btn_tool btn_circle_ = gui::btn_tool(common::tool_tag::circle);
  gui::btn_tool btn_eraser_ = gui::btn_tool(common::tool_tag::eraser);

  gui::btn_color btn_red_ = gui::btn_color(common::color_tag::red);
  gui::btn_color btn_blue_ = gui::btn_color(common::color_tag::blue);
  gui::btn_color btn_green_ = gui::btn_color(common::color_tag::green);
  gui::btn_color btn_yellow_ = gui::btn_color(common::color_tag::yellow);
  gui::btn_color btn_white_ = gui::btn_color(common::color_tag::white);
  gui::btn_color btn_black_ = gui::btn_color(common::color_tag::black);

  utils::logger logger_{ "Viewer" };

public:
  explicit viewer(std::shared_ptr<svg::core::base_model<common::elem_type_t>> model,
                  std::shared_ptr<svg::core::base_controller<common::elem_type_t>> ctrl) noexcept;
  void redraw() override;

  void on_canvas_click(const point_t<common::elem_type_t> p) noexcept { canvas_.click(p); }

  void on_btn_open_click(const std::string& path) noexcept { btn_open_.click(path); }
  void on_btn_save_click() noexcept { btn_save_.click(); }
  void on_btn_clear_click() noexcept { btn_clear_.click(); }

  void on_btn_dot_click() noexcept { btn_dot_.click(); }
  void on_btn_line_click() noexcept { btn_line_.click(); }
  void on_btn_rect_click() noexcept { btn_rect_.click(); }
  void on_btn_circle_click() noexcept { btn_circle_.click(); }
  void on_btn_eraser_click() noexcept { btn_eraser_.click(); }

  void on_btn_color_red_click() noexcept { btn_red_.click(); }
  void on_btn_color_blue_click() noexcept { btn_blue_.click(); }
  void on_btn_color_green_click() noexcept { btn_green_.click(); }
  void on_btn_color_yellow_click() noexcept { btn_yellow_.click(); }
  void on_btn_color_white_click() noexcept { btn_white_.click(); }
  void on_btn_color_black_click() noexcept { btn_black_.click(); }
};

} /* core:: */
} /* svg:: */

#endif /* CORE_VIEWER_HPP_ */
