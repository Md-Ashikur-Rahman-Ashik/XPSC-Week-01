#include <bits/stdc++.h>
using namespace std;

int main()
{
    string inputString;
    cin >> inputString;

    int stringSize = inputString.length();

    bool flag = false;

    for (int i = 0; i < stringSize; i++)
    {
        if (i + 1 < stringSize && inputString[i] == 's' && inputString[i + 1] == 's')
        {
            cout << "hiss";
            flag = true;
            break;
        }
    }

    if (!flag)
    {
        cout << "no hiss";
    }

    return 0;
}