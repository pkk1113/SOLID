#pragma once

template<typename T>
struct Specification {
	virtual bool is_satisfied(const T& item) const = 0;
};