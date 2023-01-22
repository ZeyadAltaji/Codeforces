// I_love_username.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

using namespace std;
int main()
{
	int number, conter = 0;
	cin >> number;
	//int arr[number];
	std::vector<int> arr(number);
	for (int i = 0; i < number; i++) {
		cin >> arr[i];
	}
	int max = arr[0], min = arr[0];
	for (int i = 0; i < number; i++) {
		if (arr[i] > max) {
			max = arr[i];
			conter++;
		}
		else if (arr[i] < min)
		{
			min = arr[i];
			conter++;
		}
	}
	cout << conter << endl;
	return 0;
}