// Boy or Girl.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include<bits/stdc++.h>
#include <string>
#include <iostream>
using namespace std;
int main()
{
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    int l = s.length();
    int ans = 0;
    for (int i = 1; i < l; i++)
    {
        if (s[i] != s[i - 1])
            ans++;
    }
    //even grils
    if (ans & 1)
        cout << "CHAT WITH HER!" << endl;
    else
        cout << "IGNORE HIM!" << endl;

    return 0;
}