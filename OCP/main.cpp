#include "Product.h"
#include "SpecificationFilter.hpp"
#include "ColorSpecification.hpp"
#include "SizeSpecification.hpp"
#include "AndSpecification.hpp"

int main() {
	Product A{ "���� ����", Color::Green, Size::Small };
	Product B{ "���� ����", Color::Red, Size::Large };
	Product C{ "��� ����", Color::Red, Size::Small };

	Items<Product*> items{ &A, &B, &C };

	ColorSpecification<Product> color_spec(Color::Red);
	SizeSpecification<Product> size_spec(Size::Medium);

	SpecificationFilter<Product> specification_filter;

	auto new_items = specification_filter.filter(items, color_spec && size_spec);

	printf("Total of large specification things is %d\n", new_items.size());
}

