// Football.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    cin >> str;
    int conter = 1;
    for (int i = 1; i <= str.length(); i++) {
        if (str[i] == str[i - 1]) {
            conter++;
            if (conter == 7) {
                cout << "YES\n" ;
                return 0;
            }
        }
        else {
            conter = 1;
        }

    }
    cout << "NO\n";
    return 0;
}

 