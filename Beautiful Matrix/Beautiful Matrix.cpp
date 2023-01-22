// Beautiful Matrix.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>

using namespace std;
int main()
{
	// index 0 1 2 3 4 =i
	// index =j
	//0 1
	//1 2
	//2 3 
	//3 4
	//4 5
	int matrix[5][5];
	int loc = 0;
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			int item;
			cin >> item;
			matrix[i][j] = item;
			if (item == 1)
			{
				/*
				0 0 0 0 0
				0 0 1 0 0
				0 0 0 0 0
				0 0 0 0 0
				/**/
				if (j >= 2) {
					loc += j - 2;
				}
				else
				{
					loc += 2 - j;
				}
				if (i >= 2)
				{
					loc += i - 2;
				}
				else {
					loc += 2 - i;
				}

			}


		}
	}
	cout << loc << endl;
}