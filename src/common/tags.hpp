/**
 *  @file tags.hpp
 *  @brief The tools discription
 */

#ifndef COMMON_TAGS_HPP_
#define COMMON_TAGS_HPP_

namespace common {

enum class color_tag : char {
    red
  , blue
  , green
  , yellow
  , white
  , black
};

enum class tool_tag : char {
    dot
  , line
  , rect
  , circle
  , eraser
};

} /* common:: */

using color_tag_t = common::color_tag;
using tool_tag_t = common::tool_tag;


#endif /* COMMON_TAGS_HPP_ */
