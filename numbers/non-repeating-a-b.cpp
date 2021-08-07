#include<bits/stdc++.h>
using namespace std;

int repeated_digit(int n)
{
    unordered_set<int> s;
  
    while(n != 0)
    {
        int d = n % 10;
  
        if(s.find(d) != s.end())
        {
            return 0;
        }
        s.insert(d);
        n = n / 10;
    }

    return 1;
}

int main() {
 int a, b;
  cin>>a>>b;
  for(int i = a; i <= b; i++) {
   if(repeated_digit(i) == 1) cout<<i<<" "; 
  }
  return 0;
}
