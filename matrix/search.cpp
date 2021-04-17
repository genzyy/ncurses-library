#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, a;
    cin >> n >> m >> a;
    int s[n][m];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> s[i][j];

    int r = 0, c = m - 1;
    while (r < n && c >= 0)
    {
        if (s[r][c] == a)
        {
            cout << "found";
            return 0;
        }
        if (s[r][c] > a)
            c--;
        else
            r++;
    }
    cout << "not found";
    return 0;
}