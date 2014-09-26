#include "map.h"
#include "Display.h"


map::map(void)
{
	for (int i = 0; i < x; ++i)
		for (int j = 0; j < y; ++j)
			field[j][i] = Display::ground;
}


map::~map(void)
{
}
