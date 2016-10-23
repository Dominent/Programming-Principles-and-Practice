#include <iostream>
#include <limits>
#include <string>
#include <regex>
#include <vector>

using namespace std;

string get_matched_value(string, string);

int main()
{
	constexpr double delta = 0.01;

	constexpr double meter_to_cm_conversion_rate = 100.0;
	constexpr double inch_to_cm_conversion_rate = 2.54;
	constexpr double foot_to_cm_conversion_rate = 30.48;

	string input = "??";
	char unit = '?';

	double value = 0.0;

	string value_pattern = "[0-9\\.]+";
	string unit_pattern = "[a-z]{1}";

	double sum = 0.0;
	double min = numeric_limits<double>::max();
	double max = numeric_limits<double>::min();

	int count = 0;

	vector<double> numbers;

	cout << "Enter a value, followed by a unit: (centimeter[c], meter[m], inch[i], foot[f])\n";
	while (getline(cin, input))
	{
		try
		{
			unit = get_matched_value(input, unit_pattern)[0];

			value = stod(get_matched_value(input, value_pattern));
		}
		catch (const exception&)
		{
			break;
		}

		if (value > max)
		{
			max = value;
		}
		else if (value < min)
		{
			min = value;
		}

		++count;

		switch (unit)
		{
		case 'c':
			break;
		case 'm':
			value *= meter_to_cm_conversion_rate;
			break;
		case 'i':
			value *= inch_to_cm_conversion_rate;
			break;
		case 'f':
			value *= foot_to_cm_conversion_rate;
			break;
		default:
			cout << "Unknown unit!\n";
			break;
		}

		numbers.push_back(value);

		sum += value;
	}

	cout << "\nTotal sum: " << sum / meter_to_cm_conversion_rate << " m.";
	cout << "\nMin: " << min / meter_to_cm_conversion_rate << " m.";
	cout << "\nMax: " << max / meter_to_cm_conversion_rate << " m.";

	for (double number : numbers)
	{
		cout << '\n' << number;
	}

	return 0;
}

///<summary>
///	Gets a value from text which matches the pattern.
///</summary>
///<param name='input'>The text from which we get the matched value.</param>
///<param name='pattern'>The pattern which matches the value.</param>
///<returns>The matched value represented as string.</returns>
string get_matched_value(string input, string pattern)
{
	regex rexpr(pattern);
	cmatch match;

	char* text = (char*)(input.c_str());

	regex_search(text, match, rexpr);

	return match[0];
}
