#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, s = 1;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << s << " ";
            s = !s;
        }
        cout << endl;
    }
    return 0;
}