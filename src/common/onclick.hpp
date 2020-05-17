/**
 *  @file onclick.hpp
 *  @brief Subscribers by click.
 */

#ifndef COMMON_ONCLICK_HPP_
#define COMMON_ONCLICK_HPP_

#include "observer.hpp"

namespace common {

template<class ...ARGS>
class on_click {
  observer<ARGS...> subscribers_;

public:
  virtual ~on_click() = default;

  void append(func_ptr_t<ARGS...>&& subscriber) noexcept {
    subscribers_.add_listener(std::move(subscriber));
  }
  void click(const ARGS& ...args) {
    subscribers_.notify_update(args...);
  }
};

} /* common:: */

#endif /* COMMON_ONCLICK_HPP_ */
