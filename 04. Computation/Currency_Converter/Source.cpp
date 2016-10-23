// Converts yen, euros, pounds into dollars.

#include <iostream>

using namespace std;

int main()
{
	constexpr double yen_to_dollar_rate = 0.009678;
	constexpr double euro_to_dollar_rate = 1.09635;
	constexpr double pound_to_dollar_rate = 1.226595;

	char unit = '?';

	double output = 0.0;
	double input = 0.0;

	cout << "Please enter a value followed by a currency(yen[y], euro[e], pound[p])";

	cin >> input >> unit;

	if (unit == 'y')
	{
		output = input * yen_to_dollar_rate;
	}
	else if (unit == 'e')
	{
		output = input * euro_to_dollar_rate;
	}
	else if (unit == 'p')
	{
		output = input * pound_to_dollar_rate;
	}
	else
	{
		cout << "\nI dont know that unit!";
	}

	cout << '\n' << output << " dollars.";

	return 0;
}