// Theatre Square.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

 #include <iostream>
#include <cmath>
using namespace std;

int main() {
    double m, n, a;
    cin >> m >> n >> a;
    long long x, y;
    x = ceil(m / a);
    y = ceil(n / a);

    cout << x * y << endl;

    return 0;
}