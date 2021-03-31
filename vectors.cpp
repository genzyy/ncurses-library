#include <iostream>
#include <vector>
using namespace std;

void parse(vector<int> a, int n)
{
    for (auto i = a.begin(); i != a.end(); i++)
    {
        cout << *i << "\n";
    }
    cout << n;
}

int main()
{
    vector<int> s;

    for (int i = 0; i < 5; i++)
        s.push_back(i);
    parse(s, 3);
    for (auto i = s.rbegin(); i != s.rend(); i++)
        cout << *i;
    return 0;
}