#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int s[n], sum = 0, maxSum = INT_MIN;
    for (int i = 0; i < n; i++)
        cin >> s[i];
    for (int i = 0; i < n; i++)
    {
        if (s[i] >= 0)
        {
            sum = sum + s[i];
            //cout << sum << " ";
            maxSum = max(maxSum, sum);
        }
        else
        {
            sum = 0;
        }
    }
    cout << maxSum << endl;
    return 0;
}