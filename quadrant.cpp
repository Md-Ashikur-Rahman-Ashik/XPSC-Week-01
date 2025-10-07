#include <bits/stdc++.h>
using namespace std;

int main()
{
    int firstValue, secondValue;
    cin >> firstValue >> secondValue;

    if (firstValue >= 0 && secondValue >= 0)
    {
        cout << 1;
    }
    else if (firstValue < 0 && secondValue >= 0)
    {
        cout << 2;
    }
    else if (firstValue < 0 && secondValue < 0)
    {
        cout << 3;
    }
    else if (firstValue >= 0 && secondValue < 0)
    {
        cout << 4;
    }

    return 0;
}