// Write a program that "bleeps" out words you dislike.

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(int argc, char* argv[])
{
	vector<string> words;

	cout << "Enter words: ";

	for (string word; cin >> word;)
	{
		words.push_back(word);
	}

	string  dislicked_words[] = { "Broccoli", "Papper", "Tomatoes", "Cucumber" };

	for (string word : words)
	{
		for (string dislicked_word : dislicked_words)
		{
			if(word == dislicked_word)
			{
				cout << "Bleep\n";
			}
		}
	}

	return 0;
}
