// Way Too Long Words.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>

using namespace std;

int main()
{
    int n;
    std::cin >> n;
    while (n-- > 0)
    {
        string str;
        std::cin >> str;
        if (str.length() > 10) {
            cout << str[0] << str.length() - 2 << str[str.length() - 1] << endl;
        }
        else {
            cout << str << endl;
        }
    }


    return 0;
}