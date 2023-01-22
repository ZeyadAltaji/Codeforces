// Bear and Big Brother.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int FW, LW, conter = 0;
    cin >> FW >> LW;
    if (FW > LW) {
        conter = 0;
    }
    else {
        while (FW <= LW)
        {
            FW = FW * 3;
            LW = LW * 2;
            conter++;
        }
    }
    cout << conter << endl;
    return 0;
}

 