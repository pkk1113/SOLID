#include "Product.h"
#include "SpecificationFilter.hpp"
#include "ColorSpecification.hpp"
#include "SizeSpecification.hpp"
#include "AndSpecification.hpp"

int main() {
	Product A{ "«ÿ√  ∏ª∏≤", Color::Green, Size::Small };
	Product B{ "∫”¿∫ ∏¡∞Ì", Color::Red, Size::Large };
	Product C{ "∫”¿∫ µ˛±‚", Color::Red, Size::Small };

	Items<Product*> items{ &A, &B, &C };

	using color_spec = ColorSpecification<Product>;
	using size_spec = SizeSpecification<Product>;
	SpecificationFilter<Product> fil;
	
	auto spec = color_spec(Color::Red) && size_spec(Size::Large);
	auto new_items = fil.filter(items, spec);

	printf("Total of large specification things is %d\n", new_items.size());
}

