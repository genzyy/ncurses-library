#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int s[n], a[n] = {0};
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
        a[s[i]] = a[s[i]] + 1;
    }
    for (int i = 0; i < n; i++)
    {
        if (a[s[i]] > 1)
        {
            cout << i + 1 << endl;
            return 0;
        }
    }
    return 0;
}
