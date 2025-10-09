#include <bits/stdc++.h>
using namespace std;

int main()
{
    int testcase;
    cin >> testcase;

    for (int i = 0; i < testcase; i++)
    {
        long long int firstValue, secondValue;
        cin >> firstValue >> secondValue;

        if (firstValue > secondValue)
        {
            cout << ">\n";
        }
        else if (firstValue < secondValue)
        {
            cout << "<\n";
        }
        else
        {
            cout << "=\n";
        }
    }

    return 0;
}