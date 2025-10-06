#include <bits/stdc++.h>
using namespace std;

int main()
{
    string firstString, secondString;
    cin >> firstString >> secondString;

    int stringSize = firstString.length();

    int count = 0;

    for (int i = 0; i < stringSize; i++)
    {
        if (firstString[i] != secondString[i])
        {
            count++;
        }
    }

    cout << count;

    return 0;
}