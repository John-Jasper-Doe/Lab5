/**
 * @file    main.cpp
 * @brief   The main project file is "Editor".
 */



#include "common/onclick.hpp"
#include "primitives/dot.hpp"
#include "primitives/line.hpp"
#include "primitives/rect.hpp"
#include "primitives/circle.hpp"


#include <iostream>
#include <thread>
#include <chrono>


using namespace std::chrono_literals;
void print_main1() { std::cout << __PRETTY_FUNCTION__ << std::endl; }

void print_main2(const int a) { std::cout << __PRETTY_FUNCTION__ << ": " << a << std::endl; }


int main() {
  std::cout << "SVG Editor" << std::endl;

  using namespace svg::primitives;
  dot<int> tdot(svg::point_t<int>{ 2, 4 }, common::color_tag::red);
  line<int> tline(svg::point_t<int>{ 1, 1 }, svg::point_t<int>{ 5, 5 }, common::color_tag::red);
  rect<int> trect(svg::point_t<int>{ 2, 2 }, svg::point_t<int>{ 8, 3 }, common::color_tag::red);
  circle<int> tcircle(svg::point_t<int>{ 6, 6 }, 5, common::color_tag::red);

  common::on_click<> l1;
  common::on_click<int> l2;

  l1.append(print_main1);

//  auto l = [](int s) { print_main2(s); };
  l2.append(print_main2);

  std::this_thread::sleep_for(3s);

  l1.notify();
  l2.notify(5);

  std::cout << "Dot.x = " << tdot.x() << " - Dot.y = " << tdot.y() << std::endl;
  std::cout << "Line.x = " << tline.x() << " - Line.y = " << tline.y() << std::endl;
  std::cout << "Rect.x = " << trect.x() << " - Rect.y = " << trect.y() << std::endl;
  std::cout << "Circle.x = " << tcircle.x() << " - Circle.y = " << tcircle.y() << std::endl;

  return 0;
}

