#include "Display.h"


Display::Display(void)
{
	ground = '.';
	player = '@';
	bullet = '#';

	for (int i = 0; i < sizeof(enemy); ++i)
	{
		enemy[i] = i + 1;
	}
	
	
}


Display::~Display(void)
{
}
