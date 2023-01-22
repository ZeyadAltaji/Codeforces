// String Task.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;
int main()
{
	string word;
	cin >> word;
	for (int i = 0; i < word.length(); i++) {
		word[i] = towlower(word[i]);
		if (word[i] == 'A' || word[i] == 'a' || word[i] == 'O' ||
			word[i] == 'o' || word[i] == 'Y' || word[i] == 'y' ||
			word[i] == 'E' || word[i] == 'e' || word[i] == 'U' ||
			word[i] == 'u' || word[i] == 'I' || word[i] == 'i') {
			continue;
		}
		cout << "." << word[i];
	}
	cout << "\n";
	return 0;

}