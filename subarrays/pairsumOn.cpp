#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, sum;
    cin >> n >> sum;
    int s[n];
    for (int i = 0; i < n; i++)
        cin >> s[i];
    int low = 0, high = n - 1;
    while (low != high)
    {
        int num = s[low] + s[high];
        if (num == sum)
        {
            cout << low << " " << high << endl;
            return 0;
        }
        else if (num < sum)
            ++low;
        else if (num > sum)
            --high;
    }
    cout << "No" << endl;
    return 0;
}