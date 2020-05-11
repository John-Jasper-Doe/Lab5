/**
 *  @file testgui.hpp
 *  @brief Description of the test GUI class.
 */

#ifndef TEST_GUI_HPP_
#define TEST_GUI_HPP_

#include <memory>

namespace svg::core {
  class viewer;
}

namespace test {

class test_gui {
  std::shared_ptr<svg::core::viewer> viewer_;

public:
  explicit test_gui(std::shared_ptr<svg::core::viewer> viewer) noexcept;

  void start() noexcept;

protected:
  void test_open() noexcept;
  void test_save() noexcept;
  void test_claer() noexcept;
  void test_dot_tool() noexcept;
  void test_line_tool() noexcept;
  void test_rect_tool() noexcept;
  void test_circle_tool() noexcept;
  void test_eraser_tool() noexcept;
  void test_change_color() noexcept;
};

} /* test:: */

#endif /* TEST_GUI_HPP_ */
