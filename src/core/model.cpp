/**
 *  @file model.cpp
 *  @brief Implementation of the model class.
 */


#include "core/model.hpp"

namespace svg::core {

color_tag_t svg::core::model::color() const {
  return color_tag_;
}

void svg::core::model::set_color(color_tag_t color) {
  color_tag_ = color;
}

tool_tag_t svg::core::model::tool() const {
  return tool_tag_;
}

void svg::core::model::set_tool(tool_tag_t tool) {
  tool_tag_ = tool;
}

void model::add_element(std::unique_ptr<element_t<using_type_t> >&& elem) {
  elements_.push_back(std::move(elem));
  notify_update();
}

void model::delete_element(const point_t<using_type_t>& point) {
  for (auto it = elements_.rbegin(); it != elements_.rend(); ++it) {
    if ((*it)->x() == point.x && (*it)->y() == point.y) {
      elements_.erase(it.base());
      notify_update();
      break;
    }
  }
}

void model::open(const std::string& path) {
  if (path.empty()) {
    throw std::runtime_error("New file path is empty!");
  }

  clear();
  path_ = path;
  notify_update();
}

void model::clear() {
  color_tag_ = common::color_tag::red;
  tool_tag_ = common::tool_tag::dot;
  path_.clear();
  elements_.clear();
  notify_update();
}

void model::save() const {
  if (!path_.empty()) {
    /* Save all model state */
  }
  else {
    throw std::runtime_error("Can't save, path is empty");
  }
}

const std::list<std::unique_ptr<element_t<using_type_t> > >& model::elements() const {
  return elements_;
}


} /* svg::core:: */
