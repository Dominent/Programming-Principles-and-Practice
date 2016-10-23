#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	cout << "Enter a number: ";

	int input = 0;

	cin >> input;

	if(input % 2 == 0)
	{
		cout << input << " is even\n";
	}
	else
	{
		cout << input << " is odd\n";
	}

	return 0;
}