/**
 *  @file model.hpp
 *  @brief Description of the model class.
 */


#ifndef CORE_MODEL_HPP_
#define CORE_MODEL_HPP_

#include "basemodel.hpp"
#include "common/common.hpp"
#include "utils/logger.hpp"

namespace svg {
namespace core {

class model : public svg::core::base_model<common::elem_type_t> {
  std::list<std::unique_ptr<element_t<common::elem_type_t>>> elements_;
  std::string path_{ "" };
  tool_tag_t tool_tag_{ common::tool_tag::dot };
  color_tag_t color_tag_{ common::color_tag::red };
  utils::logger logger_{ "Model" };

public:
  color_tag_t color() const override;
  void set_color(color_tag_t color) override;

  tool_tag_t tool() const override;
  void set_tool(tool_tag_t tool) override;

  void add_element(std::unique_ptr<element_t<common::elem_type_t>>&& elem) override;
  void delete_element(const point_t<common::elem_type_t>& point) override;

  void open(const std::string& path) override;
  void clear() override;
  void save() const override;

  const std::list<std::unique_ptr<element_t<common::elem_type_t>>>& elements() const override;
};

} /* core:: */
} /* svg:: */

#endif /* CORE_MODEL_HPP_ */
