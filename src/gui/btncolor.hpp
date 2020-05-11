/**
 *  @file btncolor.hpp
 *  @brief Definition on the color button class
 */


#ifndef GUI_BTNCOLOR_HPP_
#define GUI_BTNCOLOR_HPP_

#include "common/onclick.hpp"
#include "common/tags.hpp"

namespace svg::gui {

class btn_color : public common::on_click<> {
  color_tag_t color_;

public:
  explicit btn_color(color_tag_t color) noexcept : color_{ color } { }
  color_tag_t color() const { return color_; }
};

} /* svg::gui:: */

#endif /* GUI_BTNCOLOR_HPP_ */
