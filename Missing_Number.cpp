#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int integerValue;
    cin >> integerValue;

    long long int sum = 0;

    for (long long int i = 1; i <= integerValue - 1; i++)
    {
        long long int inputValue;
        cin >> inputValue;
        sum = sum + inputValue;
    }

    long long int desiredResult = (integerValue * (integerValue + 1)) / 2;
    long long int finalResult = desiredResult - sum;

    cout << finalResult;

    return 0;
}