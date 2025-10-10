#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int integerArray[105];

    long long int sum = 0;

    for (int i = 1; i < 105; i++)
    {
        sum = sum + (i * i);
        integerArray[i] = sum;
    }

    long long int integerValue;

    while (cin >> integerValue)
    {
        if (integerValue != 0)
        {
            cout << integerArray[integerValue] << '\n';
        }
    }

    return 0;
}