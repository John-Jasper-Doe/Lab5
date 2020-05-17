/**
 *  @file canvas.hpp
 *  @brief Definition on the canvas class
 */


#ifndef GUI_CANVAS_HPP_
#define GUI_CANVAS_HPP_

#include "common/onclick.hpp"
#include "common/common.hpp"
#include "primitives/point.hpp"

namespace svg {
namespace gui {

class canvas : public common::on_click<point_t<common::elem_type_t>> { };

} /* gui:: */
} /* svg:: */

#endif /* GUI_CANVAS_HPP_ */
