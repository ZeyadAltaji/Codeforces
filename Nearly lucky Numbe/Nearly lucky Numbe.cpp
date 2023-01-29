// Nearly lucky Numbe.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
   
        long long num;
        cin >> num;
        int conter = 0;
        while (num != 0)
        {
            if (num % 10 == 4 || num % 10 == 7)
            {
                conter += 1;
            }
            num /= 10;
        }
        if (conter == 4 || conter == 7)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
        return 0;
   
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

//old selction
/* string str;
    cin >> str;
    int conter = 0;
    for (int i = 0; i < str.size(); i++) {
        if (str[i] = '4' || str[i] == '7') {
            conter++;
        }
    }
        if (conter == 4 || conter == 7) {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    */