#include "map.h"
#include "Display.h"
#include <iostream>


map::map(void)
{
	for (int i = 0; i < width; ++i)
		for (int j = 0; j < height; ++j)
			field[j][i] = Display::ground;
}


map::~map(void)
{
}

void map::print()
{
	for (int i = 0; i < width; ++i)
	{
		for (int j = 0; j < height; ++j)
		{
			std::cout << field[j][i];
		}
		std::cout << '\n';
	}
}