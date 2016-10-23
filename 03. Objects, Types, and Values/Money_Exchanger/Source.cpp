#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int pennies, nickels, dimes, quarters, half_dollars;

	cout << "Enter pennies, nickels, dimes, quarters, half_dollars: ";

	cin >> pennies >> nickels >> dimes >> quarters >> half_dollars;

	cout << "You have: "
		 << pennies << " pennies\n" 
		 << nickels << " nickles\n" 
		 << dimes << " dimes\n" 
		 << quarters << " quarters\n" 
		 << half_dollars << " half dollars\n";

	return 0;
}
