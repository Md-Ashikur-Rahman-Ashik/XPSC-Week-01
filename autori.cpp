#include <bits/stdc++.h>
using namespace std;

int main()
{
    string inputString;
    cin >> inputString;

    int stringSize = inputString.length();

    string finalString;

    for (int i = 0; i < stringSize; i++)
    {
        if (i == 0)
        {
            finalString.push_back(inputString[i]);
        }
        else if (inputString[i] == '-')
        {
            finalString.push_back(inputString[i + 1]);
        }
    }

    cout << finalString;

    return 0;
}