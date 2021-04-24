#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str = "asdfghjkl";
    transform(str.begin(), str.end(), str.begin(), ::toupper);
    cout << str;
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    return 0;
}