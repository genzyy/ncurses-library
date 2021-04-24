#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;
    char ans;
    int freq[26] = {0}, max = 0;
    for (int i = 0; i < str.length(); i++)
        freq[str[i] - 'a']++;
    for (int i = 0; i < 26; i++)
    {
        if (max < freq[i])
        {
            max = freq[i];
            ans = i + 'a';
        }
    }
    cout << ans << ": " << max << endl;
    return 0;
}