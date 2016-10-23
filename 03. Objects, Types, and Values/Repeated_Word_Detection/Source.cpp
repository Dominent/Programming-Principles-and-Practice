#include <iostream>
#include <string>

using namespace std;

int main(int argc, char* argv[])
{
	int number_of_words = 0;

	string previous = "?";
	string current = "?";

	while (cin >> current)
	{
		++number_of_words;

		if (previous == current)
		{
			cout << "Number of words: " << number_of_words << ".\n"
				 << "Repeated word: " << current << '\n';
		}

		previous = current;
	}

	return 0;
}