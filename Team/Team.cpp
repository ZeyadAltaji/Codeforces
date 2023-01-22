// Team.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>

using namespace std;

int main()
{
    int size;
    int conter = 0;
    cin >> size;
    for (int x = 0; x < size; x++) {
        int t1, t2, t3;
        int result;
        cin >> t1 >> t2 >> t3;
        result = t1 + t2 + t3;
        if (result >= 2) {
            conter++;

        }
    }

    cout << conter << endl;

    return 0;
}