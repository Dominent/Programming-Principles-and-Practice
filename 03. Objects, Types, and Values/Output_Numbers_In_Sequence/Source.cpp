#include <iostream>
#include <algorithm>

using namespace std;

int main(int argc, char* argv[])
{
	cout << "Enter three numbers: \n";

	int input[3];

	for (int i = 0; i < 3; i++)
	{
		cin >> input[i];
	}

	sort(input, input + 3);

	for (int i = 0; i < 3; i++)
	{
		cout << input[i]<<'\n';
	}

	return 0;
}
