#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	double input = 0.0;

	while(cin >> input)
	{
		int i = input;

		char c = i;

		int i2 = c;

		cout << "input = " << input
			 << "\ni = " << i
			 << "\ni2 = " << i2 
			 << "\nchar(" << c << ")\n";
	}

	return 0;
}
