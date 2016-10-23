#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	cout << "Enter two numbers: ";

	double val1 = 0.0;

	double val2 = 0.0;

	cin >> val1 >> val2;

	cout << "Enter operator[+, -, *, /]";

	char calculation_operator = '?';

	cin >> calculation_operator;

	double result = 0.0;

	switch (calculation_operator)
	{
		case '+':
			result = val1 + val2;
			break;
		case '-':
			result = abs(val1 - val2);
			break;
		case '*':
			result = val1 * val2;
			break;
		case '/':
			result = val1 / val2;
			break;
		default:
			cout << "Wrong opperation!";
			break;
	}

	cout << val1 << ' ' << calculation_operator << ' ' << val2 << " = " << result << '\n';

	return 0;
}
