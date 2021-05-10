#include<bits/stdc++.h>
using namespace std;

void str_permutations(string str, int l, int n) {
  if(l == n) {
    cout<<str<<endl;
    return;
  }

  for(int i=l; i<=n;i++) {
    swap(str[l], str[i]);
    str_permutations(str,l+1,n);
    swap(str[l], str[i]);
  }
}

int main() {
  string str;
  cin>>str;

  str_permutations(str,0,str.length()-1);
  return 0;
}
