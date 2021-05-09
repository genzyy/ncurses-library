#include<bits/stdc++.h>
using namespace std;

string string_dup(string str) {
  if(str.length() == 0) return "";
  char s = str[0];
  string ans = string_dup(str.substr(1));

  if(s == ans[0]) return ans;
  return (s+ans);
}

int main() {
  string str = "aaabbc";
  string stra = string_dup(str);
  cout<<stra<<endl;
  return 0;
}
