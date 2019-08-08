#include "Product.h"
#include "SpecificationFilter.hpp"
#include "ColorSpecification.hpp"
#include "SizeSpecification.hpp"
#include "AndSpecification.hpp"

int main() {
	Product A{ "���� ����", Color::Green, Size::Small };
	Product B{ "���� ����", Color::Red, Size::Large };
	Product C{ "���� ����", Color::Red, Size::Small };

	Items<Product*> items{ &A, &B, &C };

	auto color_spec = ColorSpecification<Product>(Color::Red);
	auto size_spec = SizeSpecification<Product>(Size::Large);

	auto spec_filter = SpecificationFilter<Product>();
	auto new_items = spec_filter.filter(items, color_spec && size_spec);

	printf("���͵� ������ ����� ũ��: %d\n",
		   new_items.size());
}

