// Elephant.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int x;
    cin >> x;
    if (x % 5 == 0) {
        cout << x / 5;
    }
    else
    {
        cout << (x / 5) + 1;
    }
}

//     |
//     |
//     |
//     |
//     |
//     |                            |
//     |                            |
//     |                            |
//    -|________________________________________
//  0,0| 1  2  3  4  5         10  12    X
