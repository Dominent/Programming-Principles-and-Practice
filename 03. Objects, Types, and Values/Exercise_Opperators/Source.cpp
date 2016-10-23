#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	cout << "Please enter a whole number: ";

	int input = 0;

	cin >> input;

	double input_sqrt = sqrt(input);

	double input_modulus = input % 2;

	cout << "\nInput: " << input 
		 << "\nSquare root of input : " << input_sqrt
		 << "\nModulus of 2 of input: " << input_modulus;

	return 0;
}
