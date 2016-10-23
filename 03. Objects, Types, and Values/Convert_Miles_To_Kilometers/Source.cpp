#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	constexpr float Miles_To_Km = 1.609;

	cout << "Enter number in miles: ";

	float miles = 0.0;

	cin >> miles;

	float kilometers = miles * Miles_To_Km;

	cout << "Converted :" << miles << " miles " << "to " << kilometers << " kilometers.\n";

	return 0;
}
