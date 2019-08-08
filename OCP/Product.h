#pragma once
#include <string>

using Name = std::string;

enum Color {
	Red,
	Green,
	Blue,
};

enum Size {
	Small,
	Medium,
	Large,
};

struct Product {
	Name name;
	Color color;
	Size size;
};