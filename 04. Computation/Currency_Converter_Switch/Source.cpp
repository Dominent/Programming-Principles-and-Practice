// Converts yen, euros, pounds, yuan and kroner into dollars.

#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	constexpr double yen_to_dollar_rate = 0.009678;
	constexpr double euro_to_dollar_rate = 1.09635;
	constexpr double pound_to_dollar_rate = 1.226595;
	constexpr double yuan_to_dollar_rate = 0.14847;
	constexpr double kroner_to_dollar_rate = 0.12;

	char unit = '?';

	double output = 0.0;
	double input = 0.0;

	cout << "Please enter a value followed by a currency(yen[y], euro[e], pound[p], yuan[u] and kroner[k])";

	cin >> input >> unit;

	switch(unit)
	{
		case 'y':
			output = input * yen_to_dollar_rate;
			break;
		case 'e':
			output = input * euro_to_dollar_rate;
			break;
		case 'p':
			output = input * pound_to_dollar_rate;
			break;
		case 'u':
			output = input * yuan_to_dollar_rate;
			break;
		case 'k':
			output = input * kroner_to_dollar_rate;
			break;
		default:
			cout << "\nI dont know that unit!";
			break;
	}

	cout << '\n' << output << " dollars.";

	return 0;
}
