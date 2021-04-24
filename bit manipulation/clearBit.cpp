#include <bits/stdc++.h>
using namespace std;

int clearBit(int n, int i)
{
    // masking
    return (n & (~(1 << i)));
}

int main()
{
    cout << clearBit(5, 2);
    return 0;
}