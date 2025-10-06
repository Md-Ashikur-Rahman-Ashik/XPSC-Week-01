#include <bits/stdc++.h>
using namespace std;

int main()
{
    int firstNumber, secondNumber;
    cin >> firstNumber >> secondNumber;

    if (firstNumber == secondNumber || abs(firstNumber - secondNumber) == 1)
    {
        cout << firstNumber + secondNumber;
    }
    else if (firstNumber > secondNumber)
    {
        cout << firstNumber + firstNumber - 1;
    }
    else
    {
        cout << secondNumber + secondNumber - 1;
    }

    return 0;
}