#pragma once



class Display
{
public:
	Display(void);
	~Display(void);
	
	static const char ground = '.';
	//static const char enemy[] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};	//Strangely enough, this syntax is not recognized by the compiler
	static const char player = '@';
	static const char bullet = '#';

	
};

