#include <bits/stdc++.h>
using namespace std;

int main()
{
    int testcase;
    cin >> testcase;

    for (int i = 0; i < testcase; i++)
    {
        int integerNumber;
        cin >> integerNumber;

        int factorial = 1;

        for (int i = 2; i <= integerNumber; i++)
        {
            factorial = factorial * i;
        }

        if (factorial > 10)
        {
            cout << factorial % 10 << '\n';
        }
        else
        {
            cout << factorial << '\n';
        }
    }

    return 0;
}