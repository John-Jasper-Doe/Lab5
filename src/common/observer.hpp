/**
 * @file observer.hpp
 * @brief Description of the observer template class.
 */


#include <list>
#include <functional>

namespace common {

template <class ...ARGS>
using func_ptr_t = std::function<void(const ARGS& ...)>;

template <class ...ARGS>
class observer {
  std::list<func_ptr_t<ARGS...>> listeners_;

public:
  virtual ~observer<ARGS...>() = default;

  void add_listener(func_ptr_t<ARGS...> listener) noexcept {
    listeners_.push_back(std::move(listener));
  }

  void notify_update(const ARGS& ...args) noexcept {
    for (auto& listener: listeners_)
      listener(args...);
  }
};

} /* common:: */
