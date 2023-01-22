// Stones on the Table problem.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;


int main()
{
    int n;
    int conter = 0;
    cin >> n;
    string str;
    cin >> str;
    for (int i = 0; i < n; i++) {
        if (str[i] == str[i + 1]) {
            conter++;
        }
    }
    cout << conter;
}