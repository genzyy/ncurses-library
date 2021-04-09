#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int s[n], sum = 0, max = 0;
    for (int i = 0; i < n; i++)
        cin >> s[i];
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            sum = 0;
            for (int k = i; k <= j; k++)
            {
                sum = sum + s[k];
                if (sum > max)
                    max = sum;
            }
        }
    }
    cout << max << endl;
    return 0;
}