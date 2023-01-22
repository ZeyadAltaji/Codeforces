// Watermelon.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    int number;
    cin >> number;
    if (number % 2 == 0) {
        if (number <= 2) {
            cout << "no" << endl;
        }
        else {
            cout << "yes" << endl;
        }
    }
    else {
        cout << "no" << endl;
    }
    return 0;
}