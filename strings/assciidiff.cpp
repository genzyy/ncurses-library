#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str = "asdafgh";
    cout << 'a' - 'A' << endl;

    // Convert to upper case string
    for (int i = 0; i < str.length(); i++)
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] -= 32;
    cout << str << endl;

    // Convert to lower case string
    for (int i = 0; i < str.length(); i++)
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
    cout << str << endl;
    return 0;
}