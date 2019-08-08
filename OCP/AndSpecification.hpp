#include "Specification.hpp"

template<typename T>
struct AndSpecification : Specification<T> {
	const Specification<T>& spec_1st_;
	const Specification<T>& spec_2nd_;

	AndSpecification(const Specification<T>& spec_1st,
					 const Specification<T>& spec_2nd)
		: spec_1st_(spec_1st), spec_2nd_(spec_2nd) {}

	virtual bool is_satisfied(const T& item) const {
		return spec_1st_.is_satisfied(item) && spec_2nd_.is_satisfied(item);
	};
};

template<typename T>
AndSpecification<T> operator &&(const Specification<T>& left,
								const Specification<T>& right) {
	return AndSpecification<T>(left, right);
}