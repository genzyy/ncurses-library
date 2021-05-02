#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n1, n2, n3;
    cin >> n1 >> n2 >> n3;

    int s1[n1][n2], s2[n2][n3], ans[n1][n3] = {0};
    for (int i = 0; i < n1; i++)
        for (int j = 0; j < n2; j++)
            cin >> s1[i][j];

    for (int i = 0; i < n2; i++)
        for (int j = 0; j < n3; j++)
            cin >> s2[i][j];

    for (int i = 0; i < n1; i++)
        for (int j = 0; j < n3; j++)
            ans[i][j] = 0;

    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n3; j++)
        {
            for (int k = 0; k < n2; k++)
            {
                ans[i][j] += s1[i][k] * s2[k][j];
            }
        }
    }
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n3; j++)
            cout << ans[i][j] << " ";
        cout << "\n";
    }
    return 0;
}