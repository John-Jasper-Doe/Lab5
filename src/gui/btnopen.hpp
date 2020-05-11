/**
 *  @file btnopen.hpp
 *  @brief Definition on the open button class
 */


#ifndef GUI_BTNOPEN_HPP_
#define GUI_BTNOPEN_HPP_

#include "common/onclick.hpp"
#include <string>

namespace svg {
namespace gui {

class btn_open : public common::on_click<const std::string> { };

} /* gui:: */
} /* svg:: */

#endif /* GUI_BTNOPEN_HPP_ */
