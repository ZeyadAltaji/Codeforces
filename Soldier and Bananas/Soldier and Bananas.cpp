// Soldier and Bananas.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int k, n, w;
	int  total = 0;
	cin >> k >> n >> w;
	for (int i = 1; i <= w; i++) {
		total = total + i * k;
	}
	if (total > n) {
		cout << total - n;
	}
	else
	{
		cout << 0;
	}
	
}
 