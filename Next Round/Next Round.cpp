// Next Round.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
int main()
{

	int n, k;
	int arr[105]{};
	std::cin >> n;
	std::cin >> k;
	for (int x = 1; x <= n; x++)
		std::cin >> arr[x];

	int conter = 0;
	for (int x = 1; x <= n; x++)
	{
		if (arr[x] >= arr[k] && arr[x] != 0)
		{
			conter++;
		}
	}

	std::cout << conter << std::endl;


}