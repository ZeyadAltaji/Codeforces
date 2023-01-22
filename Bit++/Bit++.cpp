// Bit++.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;
int main()
{
	int n;
	cin >> n;
	int x = 0;
	for (int i = 0; i < n; i++) {
		string Operation;
		cin >> Operation;
		if (Operation == "X++" || Operation == "++X") { x++; }
		else
		{
			x--;
		}
	}
	cout << x << endl;

}