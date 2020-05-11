/**
 *  @file btnopen.hpp
 *  @brief Definition on the open button class
 */


#ifndef GUI_BTNOPEN_HPP_
#define GUI_BTNOPEN_HPP_

#include "common/onclick.hpp"
#include <string>

namespace svg::gui {

class btn_open : public common::on_click<const std::string> { };

} /* svg::gui:: */

#endif /* GUI_BTNOPEN_HPP_ */
