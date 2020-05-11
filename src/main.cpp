/**
 *  @file main.cpp
 *  @brief The main project file is "SVG Editor".
 */

#include "core/model.hpp"
#include "core/controller.hpp"
#include "core/viewer.hpp"

#include "../test/testgui.hpp"

#include <iostream>

int main() {
  std::cout << "SVG Editor" << std::endl;

  std::shared_ptr<svg::core::model> model_ptr = std::make_shared<svg::core::model>();
  std::shared_ptr<svg::core::controller> ctrl_ptr =
      std::make_shared<svg::core::controller>(model_ptr);
  std::shared_ptr<svg::core::viewer> viewer_ptr =
      std::make_shared<svg::core::viewer>(model_ptr, ctrl_ptr);

  test::test_gui tg(viewer_ptr);
  tg.start();

  return 0;
}

