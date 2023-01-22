// Helpful Maths.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>

using namespace std;
int main()
{

	string arr;
	cin >> arr;
	int  len = arr.size();
	if (len == 1) {
		cout << arr << endl;
		return 0;
	}
	for (int i = 0; i < len; i += 2) {
		for (int j = i + 2; j < len; j += 2) {
			if (arr[i] > arr[j]) {
				int temp = 0;
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	for (int i = 0; i < len; i++) {
		cout << arr[i];
	}
	cout << endl;

	return 0;
}