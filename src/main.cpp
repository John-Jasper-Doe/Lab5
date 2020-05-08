/**
 * @file    main.cpp
 * @brief   The main project file is "Editor".
 */



#include "common/onclick.hpp"


#include <iostream>
#include <thread>
#include <chrono>


using namespace std::chrono_literals;
void print_main1() { std::cout << __PRETTY_FUNCTION__ << std::endl; }

void print_main2(const int a) { std::cout << __PRETTY_FUNCTION__ << ": " << a << std::endl; }


int main() {
  std::cout << "SVG Editor" << std::endl;

  common::on_click<> l1;
  common::on_click<int> l2;

  l1.append(print_main1);

//  auto l = [](int s) { print_main2(s); };
  l2.append(print_main2);

  std::this_thread::sleep_for(3s);

  l1.notify();
  l2.notify(5);

  return 0;
}

