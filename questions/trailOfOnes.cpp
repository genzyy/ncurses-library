#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int x = 0, y = 0;
    for(int i = 0; i < n - 1; i++) {
        int c = y;
        y = x;
        x += c + (1 << i);
    }
    cout<<x<<endl;
    return 0;
}


/*
Given a number N, find the number of binary strings of length N that contains consecutive 1's in them.

 

Example 1:

Input:
N = 2
Output:
1
Explanation:
There are 4 strings of 
length 2, the strings 
are 00, 01, 10, and 
11. Only the string 11 
has consecutive 1's.
 

 

Example 2:

Input:
N = 5
Output:
19
Explanation:
There are 19 strings
having consecutive 1's.
*/
