/**
 *  @file canvas.hpp
 *  @brief Definition on the canvas class
 */


#ifndef GUI_CANVAS_HPP_
#define GUI_CANVAS_HPP_

#include "common/onclick.hpp"
#include "common/common.hpp"
#include "primitives/point.hpp"

namespace svg::gui {

class canvas : public common::on_click<point_t<common::elem_type_t>> { };

} /* svg::gui:: */

#endif /* GUI_CANVAS_HPP_ */
