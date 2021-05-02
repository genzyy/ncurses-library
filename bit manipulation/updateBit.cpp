#include <bits/stdc++.h>
using namespace std;

int updateBit(int n, int i, int value)
{
    // masking
    n = n & (~(1 << i));
    return n | (value << i);
}

int main()
{
    cout << updateBit(5, 1, 1);
    return 0;
}