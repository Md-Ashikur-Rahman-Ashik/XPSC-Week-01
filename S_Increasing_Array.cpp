#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int arraySize;
    cin >> arraySize;
    long long int integerArray[arraySize];
    for (long long int i = 0; i < arraySize; i++)
    {
        cin >> integerArray[i];
    }

    long long int count = 0;
    for (long long int i = 1; i < arraySize; i++)
    {
        if (integerArray[i] < integerArray[i - 1])
        {
            count = count + (integerArray[i - 1] - integerArray[i]);
        }
    }

    cout << count;

    return 0;
}