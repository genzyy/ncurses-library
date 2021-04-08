#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, ans = 0, mx = -1;
    cin >> n;
    int s[n + 1];
    s[n] = -1;

    for (int i = 0; i < n; i++)
        cin >> s[i];
    for (int i = 0; i < n; i++)
    {
        if (s[i] > mx && s[i] > s[i + 1])
            ans++;
        mx = max(mx, s[i]);
    }
    cout << ans << endl;
    return 0;
}