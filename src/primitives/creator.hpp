/**
 *  @file creator.hpp
 *  @brief Description of the creator class.
 */


#ifndef PRIMITIVES_CREATOR_HPP_
#define PRIMITIVES_CREATOR_HPP_

#include "basecreator.hpp"
#include "dot.hpp"
#include "line.hpp"
#include "rect.hpp"
#include "circle.hpp"
#include "common/common.hpp"
#include "utils/logger.hpp"

namespace svg {
namespace primitives {

class creator : public base_creator<common::elem_type_t> {
  utils::logger logger_{ "Creator" };

public:
  std::unique_ptr<dot<common::elem_type_t>> create_dot(point_t<common::elem_type_t> p0,
                                                       color_tag_t color) override;
  std::unique_ptr<line<common::elem_type_t>> create_line(point_t<common::elem_type_t> p0,
                                                         point_t<common::elem_type_t> p1,
                                                         color_tag_t color) override;
  std::unique_ptr<rect<common::elem_type_t>> create_rect(point_t<common::elem_type_t> p0,
                                                         point_t<common::elem_type_t> p1,
                                                         color_tag_t color) override;
  std::unique_ptr<circle<common::elem_type_t>> create_circle(point_t<common::elem_type_t> p0,
                                                             common::elem_type_t r,
                                                             color_tag_t color) override;
};

} /* primitives:: */
} /* svg:: */

#endif /* PRIMITIVES_CREATOR_HPP_ */
