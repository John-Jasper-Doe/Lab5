/**
 * @file    main.cpp
 * @brief   The main project file is "Editor".
 */



#include "common/observer.hpp"


#include <iostream>
#include <thread>
#include <chrono>


using namespace std::chrono_literals;
void print_main1() { std::cout << __PRETTY_FUNCTION__ << std::endl; }

void print_main2(const int a) { std::cout << __PRETTY_FUNCTION__ << ": " << a << std::endl; }


int main() {
  std::cout << "Editor" << std::endl;

  common::observer<> l1;
  common::observer<int> l2;

  l1.add_listener(print_main1);

//  auto l = [](int s) { print_main2(s); };
  l2.add_listener(print_main2);

  std::this_thread::sleep_for(3s);

  l1.notify_update();
  l2.notify_update(5);

  return 0;
}

