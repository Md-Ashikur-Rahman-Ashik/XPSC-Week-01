#include <bits/stdc++.h>
using namespace std;

int main()
{
    int testcase;
    cin >> testcase;

    for (int i = 0; i < testcase; i++)
    {
        int arraySize;
        cin >> arraySize;
        int integerArray[arraySize];
        for (int i = 0; i < arraySize; i++)
        {
            cin >> integerArray[i];
        }

        if (arraySize == 2 && integerArray[0] == 1 && integerArray[1] == 1)
        {
            cout << 1 << '\n';
            continue;
        }

        sort(integerArray, integerArray + arraySize);

        int count = 0;
        int index = 0;

        bool flag = false;

        for (int i = 0; i < arraySize; i++)
        {
            if (i + 1 < arraySize && integerArray[i] == 1 && integerArray[i + 1] == 1)
            {
                count++;
                i++;
            }
            else
            {
                flag = true;
                index = i;
                break;
            }
        }

        int finalCount = count + (arraySize - index);

        if (flag == true)
        {
            cout << finalCount << '\n';
        }
        else
        {
            cout << count;
        }
    }

    return 0;
}