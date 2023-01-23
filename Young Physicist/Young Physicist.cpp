// Young Physicist.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int n, x, y, z;
	cin >> n;
	int TotalX=0, TotalY=0, TotalZ=0;
	for (int i = 0; i < n; i++) {
		cin >> x >> y >> z;
		TotalX = TotalX - x;
		TotalY = TotalY - y;
		TotalZ = TotalZ - z;
	}
	if (TotalX == 0 && TotalY == 0 && TotalZ == 0) {
		cout << "YES\n";
	}
	else
	{
		cout << "NO\n";

	}
}

 