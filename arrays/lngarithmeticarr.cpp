#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int s[n], j = 2, pd, cd, curr = 2, ans = 0;
    for (int i = 0; i < n; i++)
        cin >> s[i];
    while (j < n)
    {
        cd = abs(s[j] - s[j - 1]);
        if (pd == cd)
            curr++;
        else
        {
            pd = cd;
            curr = 2;
        }
        ans = max(ans, curr);
        ++j;
    }
    cout << ans << endl;
    return 0;
}