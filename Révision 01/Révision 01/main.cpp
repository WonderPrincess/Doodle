#include <iostream>
#include <string>
#include "Calculs.h"
#include "randomness.h"

using namespace std;


double first_number, second_number;


void enter_numbers(double &x, double &y);
void show_results(double x, double y);

randomness random;



int main()
{	
	enter_numbers(first_number, second_number);
	show_results(first_number, second_number);
}




void enter_numbers(double &x, double &y)
{
	cout << "Type two numbers to calculate together\n";
	cin >> x;
	cin >> y;
}

void show_results(double x, double y)
{
	cout << "\n\n" << first_number << " + " << second_number << " = " << Calculs::add(x, y);
	cout << "\n"   << first_number << " - " << second_number << " = " << Calculs::substract(x, y);
	cout << "\n"   << first_number << " * " << second_number << " = " << Calculs::multiply(x, y);
	cout << "\n"   << first_number << " / " << second_number << " = " << Calculs::divide(x, y);

	for (int i = 0 ; i < 4 ; ++i)
		cout << "\nAnd here is a random number : " << random.random_number();

	cin.ignore();
	cin.get();
}
