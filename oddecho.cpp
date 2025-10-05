#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arraySize;
    cin >> arraySize;

    vector<string> stringVector(arraySize + 1);

    for (int i = 1; i <= arraySize; i++)
    {
        cin >> stringVector[i];
    }

    int count = 1;
    while (count <= arraySize)
    {
        cout << stringVector[count] << '\n';
        count = count + 2;
    }

    return 0;
}