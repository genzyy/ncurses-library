#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int s[n];
    for (int i = 0; i < n; i++)
        cin >> s[i];
    int check[n] = {0};
    for (int i = 0; i < n; i++)
    {
        if (s[i] >= 0)
            check[s[i]] = 1;
    }
    for (int i = 1; i < n; i++)
        if (check[i] == 0)
        {
            cout << i << endl;
            break;
        }
    return 0;
}