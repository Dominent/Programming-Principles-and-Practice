#include <iostream>
#include <string>

using namespace std;

int main(int argc, char* argv[])
{
	cout << "Enter the name of the person you want to write to: ";

	string first_name = "?";

	cin >> first_name;
	
	cout << "\nDear " << first_name << "," << "\n I miss you.";

	cout << "\nEnter another friend name";

	string friends_name = "?";

	cin >> friends_name;

	cout << "\nHave you seen " << friends_name << " lately?";

	char friends_sex = '?';

	cout << "\nEnter friends sex: (male[m], female[f])";

	cin >> friends_sex;

	cout << "\nIf you see " << friends_name << " tell " <<((friends_sex == 'm') ? ("him") : ("her")) << "to call me";

	cout << "\nEnter age of recipient";
	
	int age = 0;

	cin >> age;

	cout << "\nI have heard you just had a birthday and you are " << age << " years old.";

	if(age == 0 || age > 110)
	{
		cout << "\nYou are kidding!";
	}
	else if(age < 12)
	{
		cout << "\nNext year you will be " << age + 1 << " years old";
	}
	else if(age == 17)
	{
		cout << "\nNext year you will be able to vote.";
	}
	else if(age > 70)
	{
		cout << "\nI hope you are enjoying your retirment.";
	}

	cout << "\n Your sincerely, \n\n Dominent";

	return 0;
}