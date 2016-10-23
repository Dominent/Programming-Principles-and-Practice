#include <iostream>
#include <string>

using namespace std;

int main(int argc, char* argv[])
{
	constexpr int Months_In_Year = 12;

	cout << "Please enter your first name and age\n";

	string first_name = "?";
	double age = 0.0;

	cin >> first_name >> age;

	cout << "Hello, " << first_name << "(age: " << age * Months_In_Year << " )\n";

	return 0;
}
