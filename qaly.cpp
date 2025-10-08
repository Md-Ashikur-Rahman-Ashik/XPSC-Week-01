#include <bits/stdc++.h>
using namespace std;

int main()
{
    int integerNumber;
    cin >> integerNumber;

    double finalValue = 0;

    for (int i = 0; i < integerNumber; i++)
    {
        double firstValue, secondValue;
        cin >> firstValue >> secondValue;
        double result = firstValue * secondValue;

        finalValue = finalValue + result;
    }

    cout << fixed << setprecision(3) << finalValue;

    return 0;
}