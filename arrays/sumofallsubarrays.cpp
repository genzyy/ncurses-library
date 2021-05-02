#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, sum = 0;
    cin >> n;
    int s[n];
    for (int i = 0; i < n; i++)
        cin >> s[i];
    for (int i = 0; i < n; i++)
    {
        sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += s[j];
            cout << sum << endl;
        }
    }
    return 0;
}

/**
 * Sum of all subarrays of the given array.
 * Refer assets folder for more information.
*/