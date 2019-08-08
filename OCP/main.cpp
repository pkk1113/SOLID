#include "Product.h"
#include "SpecificationFilter.hpp"
#include "ColorSpecification.hpp"
#include "SizeSpecification.hpp"
#include "AndSpecification.hpp"

int main() {
	Product A{ "해초 말림", Color::Green, Size::Small };
	Product B{ "붉은 망고", Color::Red, Size::Large };
	Product C{ "붉은 딸기", Color::Red, Size::Small };

	Items<Product*> items{ &A, &B, &C };

	auto color_spec = ColorSpecification<Product>(Color::Red);
	auto size_spec = SizeSpecification<Product>(Size::Large);

	auto spec_filter = SpecificationFilter<Product>();
	auto new_items = spec_filter.filter(items, color_spec && size_spec);

	printf("필터된 아이템 목록의 크기: %d\n",
		   new_items.size());
}

