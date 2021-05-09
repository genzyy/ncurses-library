#include<bits/stdc++.h>
using namespace std;

void reverse_str(string str, int start, int n) {
  if(start < n) reverse_str(str, start + 1, n);
  cout<<str[start];
}

int main() {
  string str;
  cin>>str;
  int n = str.length();
  reverse_str(str, 0, n);
  return 0;
}
