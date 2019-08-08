#pragma once
#include "Product.h"
#include "Specification.hpp"

template<typename T>
struct ColorSpecification : Specification<T> {
	Color color_;

	explicit ColorSpecification(Color color) : color_(color) {}

	virtual bool is_satisfied(const T& item) const override {
		return (color_ == item.color);
	}
};