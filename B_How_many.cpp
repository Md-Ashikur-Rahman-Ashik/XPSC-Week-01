#include <bits/stdc++.h>
using namespace std;

int main()
{
    int maximumSum, maximumMultiple;
    cin >> maximumSum >> maximumMultiple;

    int count = 0;

    int i = 0;
    int j = 0;

    while ((i + j) <= maximumSum && (i * j) <= maximumMultiple)
    {
        while ((i + j) <= maximumSum && (i * j) <= maximumMultiple)
        {
            long long int countSum = i + j + (maximumSum - i - j);
            long long int countMultiply = i * j * (maximumMultiple / (i * j));
            if (countSum <= maximumSum && countMultiply <= maximumMultiple)
            {
                count++;
            }
            j++;
        }
        i++;
    }

    cout << count;

    return 0;
}