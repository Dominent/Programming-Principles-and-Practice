#include <iostream>
#include <algorithm>

using namespace std;

int main(int argc, char* argv[])
{
	cout << "Enter two numbers: ";

	int val1 = 0;

	int val2 = 0;

	cin >> val1 >> val2;

	cout << "\nMin: " << min(val1, val2)
		 << "\nMax: " << max(val1, val2) 
		 << "\nSum: " << val1 + val2 
		 << "\nDifference: " << abs(val1 - val2) 
		 << "\nProduct: " << val1 * val2 
		 << "\nRatio: " << val1 / val2 
		 << '\n';

	return 0;
}
