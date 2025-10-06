#include <bits/stdc++.h>
using namespace std;

int main()
{
    string inputString;
    cin >> inputString;

    char charArray[26];

    for (int i = 0; i < 26; i++)
    {
        char finalChar = i + 97;
        charArray[i] = finalChar;
    }

    sort(inputString.begin(), inputString.end());

    int stringSize = inputString.length();

    int countOfInput = 0;
    int countOfChar = 0;

    bool flag = false;

    while (countOfInput <= stringSize && countOfChar <= 26)
    {
        if (inputString[countOfInput] == charArray[countOfChar])
        {
            countOfInput++;
            countOfChar++;
        }
        else if (countOfInput - 1 >= 0 && inputString[countOfInput] == inputString[countOfInput - 1])
        {
            countOfInput++;
        }
        else
        {
            cout << charArray[countOfChar];
            flag = true;
            break;
        }
    }

    if (!flag)
    {
        cout << "None";
    }

    return 0;
}