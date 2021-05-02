#include <bits/stdc++.h>
using namespace std;
/**
 * Remember to not to use spaces after * while printing it or it will
 * mess up the rectangle diagram as the output. 
*/
int main()
{
    int row, col;
    cin >> row >> col;
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= col; j++)
        {
            if (i == 1 || i == row || j == 1 || j == col)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
    return 0;
}