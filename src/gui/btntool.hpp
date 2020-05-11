/**
 *  @file btntool.hpp
 *  @brief Definition on the tool button class
 */


#ifndef GUI_BTNTOOL_HPP_
#define GUI_BTNTOOL_HPP_

#include "common/onclick.hpp"
#include "common/tags.hpp"

namespace svg::gui {

class btn_tool : public common::on_click<> {
  tool_tag_t tool_;

public:
  explicit btn_tool(tool_tag_t tool) noexcept : tool_{ tool } { }
  tool_tag_t tool() const { return tool_; }
};

} /* svg::gui:: */

#endif /* GUI_BTNTOOL_HPP_ */
