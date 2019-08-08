#pragma once
#include <vector>
#include "Specification.hpp"

template<typename T>
using Items = std::vector<T>;

template<typename T>
struct Filter {
	virtual Items<T*> filter(const Items<T*>& items,
							 const Specification<T>& spec) = 0;
};
