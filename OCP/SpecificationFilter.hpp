#pragma once
#include "Filter.hpp"
#include "Specification.hpp"

template<typename T>
struct SpecificationFilter : Filter<T> {
	virtual Items<T*> filter(const Items<T*>& items,
							 const Specification<T>& spec) override {
		Items<T*> filtered;

		filtered.reserve(items.size());

		for (T* item : items) {
			if (spec.is_satisfied(*item)) {
				filtered.emplace_back(item);
			}
		}

		filtered.shrink_to_fit();

		return filtered;
	}
};