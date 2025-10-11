#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int vectorSize;
    cin >> vectorSize;
    vector<long long int> integerVector(vectorSize);
    for (int i = 0; i < vectorSize; i++)
    {
        cin >> integerVector[i];
    }

    long long int count = 0;
    for (int i = 1; i < vectorSize; i++)
    {
        if (integerVector[i] < integerVector[i - 1])
        {
            count = count + (integerVector[i - 1] - integerVector[i]);
            integerVector[i] = integerVector[i - 1];
        }
    }

    cout << count;

    return 0;
}