#pragma once
#include "Product.h"
#include "Specification.hpp"

template<typename T>
struct SizeSpecification : Specification<T> {
	Size size_;

	explicit SizeSpecification(Size size) : size_(size) {}

	virtual bool is_satisfied(const T& item) const override {
		return (size_ == item.size);
	}
};