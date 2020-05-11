/**
 *  @file testgui.cpp
 *  @brief Implementation of the test GUI class.
 */

#include "testgui.hpp"
#include "core/viewer.hpp"

#include <iostream>
#include <string>

namespace test {

namespace {

void print_func_name(const std::string& str) {
  std::cout << "\n[" << str << "]:\n";
}

} /* Anonymous:: */

test_gui::test_gui(std::shared_ptr<svg::core::viewer> viewer) noexcept
  : viewer_(viewer)
{ }

void test_gui::start() noexcept {
  test_open();
  test_dot_tool();
  test_line_tool();
  test_rect_tool();
  test_circle_tool();
  test_eraser_tool();
  test_change_color();
  test_save();
  test_claer();
}

void test_gui::test_open() noexcept {
  print_func_name(__PRETTY_FUNCTION__);
  viewer_->on_btn_open_click("some_file.svg");
}

void test_gui::test_save() noexcept {
  print_func_name(__PRETTY_FUNCTION__);
  viewer_->on_btn_save_click();
}

void test_gui::test_claer() noexcept {
  print_func_name(__PRETTY_FUNCTION__);
  viewer_->on_btn_clear_click();
}

void test_gui::test_dot_tool() noexcept {
  print_func_name(__PRETTY_FUNCTION__);
  viewer_->on_btn_dot_click();
  viewer_->on_canvas_click(svg::point_t<common::elem_type_t>{1, 2});
}

void test_gui::test_line_tool() noexcept {
  print_func_name(__PRETTY_FUNCTION__);
  viewer_->on_btn_line_click();
  viewer_->on_canvas_click(svg::point_t<common::elem_type_t>{4, 8});
}

void test_gui::test_rect_tool() noexcept {
  print_func_name(__PRETTY_FUNCTION__);
  viewer_->on_btn_rect_click();
  viewer_->on_canvas_click(svg::point_t<common::elem_type_t>{1, 7});
}

void test_gui::test_circle_tool() noexcept {
  print_func_name(__PRETTY_FUNCTION__);
  viewer_->on_btn_circle_click();
  viewer_->on_canvas_click(svg::point_t<common::elem_type_t>{3, 3});
}

void test_gui::test_eraser_tool() noexcept {
  print_func_name(__PRETTY_FUNCTION__);
  viewer_->on_btn_eraser_click();
  viewer_->on_canvas_click(svg::point_t<common::elem_type_t>{1, 7});
}

void test_gui::test_change_color() noexcept {
  print_func_name(__PRETTY_FUNCTION__);
  viewer_->on_btn_color_red_click();
  viewer_->on_btn_color_blue_click();
  viewer_->on_btn_color_black_click();
  viewer_->on_btn_color_green_click();
  viewer_->on_btn_color_white_click();
  viewer_->on_btn_color_yellow_click();
}

} /* test:: */
