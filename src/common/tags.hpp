/**
 * @file tags.hpp
 * @brief The tools discription
 */


#ifndef TAGS_HPP_
#define TAGS_HPP_


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

using color_tag_t = common::color_tag;
using tool_tag_t = common::tool_tag;

} /* common:: */


#endif /* TAGS_HPP_ */
