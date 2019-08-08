#pragma once
#include <string>

using Name = std::string;

enum class Color : int {
	Red,
	Green,
	Blue,
};

enum class Size : int {
	Small,
	Medium,
	Large,
};

struct Product {
	Name name;
	Color color;
	Size size;
};