// Word.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string word;
	cin >> word;
	int small = 0, capital = 0;
	for (int i = 0; i < word.size(); i++) {
		if (word[i] >= 97 && word[i] <= 122) {
			small++;
		}
		else
		{
			capital++;
		}
	}char result = ' ';
	if (capital > small) {
		for (int i = 0; i < word.length(); i++) {
			result = towupper(word[i]);
			cout << result;
		}
	}
	else
	{
		for (int i = 0; i < word.length(); i++) {
			result = towlower(word[i]);
			cout << result;
		}
	}
}
 //http://sticksandstones.kstrom.com/appen.html Binary Character
//
//HoUse
//capital letters : 2
//small letters   : 3
//-----------
//ViP
//capital letters : 2
//small letters   : 1
//------------------
//maTRIx
//capital letters : 3
//small letters   : 3