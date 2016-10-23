// Implement multiplication via addition.

#include <iostream>

using namespace std;

int square(int);

int main(int argc, char* argv[])
{
	cout << square(15) << '\n';

	return 0;
}

int square (int x)
{
	int output = 0;

	for (int i = 0; i < x; i++)
	{
		output += x;
	}

	return output;
}