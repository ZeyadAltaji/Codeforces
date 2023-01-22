// Word Capitalization.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;
int main()
{
	string word;
	cin >> word;
	word[0] = towupper(word[0]);
	cout << word << endl;
	return 0;

}