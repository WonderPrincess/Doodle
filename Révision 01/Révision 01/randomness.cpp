#include "randomness.h"
#include <cstdlib>
#include <ctime>


randomness::randomness(void)
{
	srand(time(NULL));
}


randomness::~randomness(void)
{
}

int randomness::random_number()
{
	int n = rand() % 99 + 1;
	return n;
}
