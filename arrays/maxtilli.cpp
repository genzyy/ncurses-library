#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, max = 0;
    cin >> n;
    int s[100];
    for (int i = 0; i < n; i++)
        cin >> s[i];

    for (int i = 0; i < n; i++)
    {
        //cout << s[i];
        for (int j = 0; j <= i; j++)
        {
            if (max < s[j])
            {
                max = s[j];
            }
        }
        cout << max << endl;
    }
    return 0;
}

/**
 * Gives the max element in the array after every ith position.
*/