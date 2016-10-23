// Print a table of all ASCII characters. Use For-loop.

#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	for (int i = 65; i <= 122; i++)
	{
		cout << (char)i << '\t' << i << '\n';

		if(i == 90)
		{
			i = 96;
		}
	}

	return 0;
}
