#pragma once


class map
{
public:
	map(void);
	~map(void);

	static const int width = 24;
	static const int height = 8;

	static char field[height][width];

	static void print();

};

