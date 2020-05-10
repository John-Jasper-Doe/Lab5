/**
 *  @file model.hpp
 *  @brief Description of the model class.
 */


#ifndef CORE_MODEL_HPP_
#define CORE_MODEL_HPP_

#include "core/basemodel.hpp"

namespace svg::core {

class model : public svg::core::base_model<using_type_t> {
  std::list<std::unique_ptr<element_t<using_type_t>>> elements_;
  std::string path_{ "" };
  tool_tag_t tool_tag_{ common::tool_tag::dot };
  color_tag_t color_tag_{ common::color_tag::red };

public:
  virtual color_tag_t color() const override;
  virtual void set_color(color_tag_t color) override;

  virtual tool_tag_t tool() const override;
  virtual void set_tool(tool_tag_t tool) override;

  virtual void add_element(std::unique_ptr<element_t<using_type_t>>&& elem) override;
  virtual void delete_element(const point_t<using_type_t>& point) override;

  virtual void open(const std::string& path) override;
  virtual void clear() override;
  virtual void save() const override;

  virtual const std::list<std::unique_ptr<element_t<using_type_t>>>& elements() const override;
};

} /* svg::core:: */

#endif /* CORE_MODEL_HPP_ */
