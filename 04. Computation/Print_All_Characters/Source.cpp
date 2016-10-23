// Print a table of all ASCII characters.

#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	char i = 97;

	while(i <= 122)
	{
		cout << i << '\t' << static_cast<int>(i) << '\n';

		++i;
	}

	return 0;
}
