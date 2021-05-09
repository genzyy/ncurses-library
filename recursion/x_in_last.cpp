#include<bits/stdc++.h>
using namespace std;

string x_in_last(string str) {
  if(str.length() == 0) return "";

  char ch = str[0];
  string ans = x_in_last(str.substr(1));
  if(ch == 'x') return (ans+ch);
  else return (ch+ans);
}


int main() {
  string str = "xaxabbxbxx";
  string s = x_in_last(str);
  cout<<s<<endl;
  return 0;
}
