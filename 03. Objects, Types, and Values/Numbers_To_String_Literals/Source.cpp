#include <iostream>
#include <string>
using namespace std;

int main(int argc, char* argv[])
{
	string numbers[] = { "zero", "one", "two", "three", "four" };

	cout << "Enter digits to convert to string: ";

	int input = 0;

	while(cin >> input)
	{
		if(input > 4 && input < 0)
		{
			cout << "Stupid computer\n";
		}
		else
		{
			cout << numbers[input] << '\n';
		}
	}

	return 0;
}
