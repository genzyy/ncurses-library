#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, num, sum = 0;
    cin >> n >> num;
    int s[n], i = 0, j = 0, st = 0, en = 0;
    for (int i = 0; i < n; i++)
        cin >> s[i];
    while (j < n && sum + s[j] <= num)

    {
        sum += s[j];
        j++;
    }
    if (sum == num)
    {
        cout << i << " " << j << endl;
        return 0;
    }
    while (j < n)
    {
        sum = sum + s[j];
        while (sum > num)
        {
            sum -= s[i];
            i++;
        }
        if (sum = num)
        {
            st = j + 1;
            en = i + 1;
            break;
        }
        j++;
    }
    cout << st << " " << en << endl;
    return 0;
}