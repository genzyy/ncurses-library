#include<bits/stdc++.h>
using namespace std;

void substring(string str, string ans) {

  if(str.length() == 0) {
    cout<<ans<<endl;
    return;
  }

  char ch = str[0];
  string ros = str.substr(1);
  int code = ch;
  substring(ros, ans);
  substring(ros, ans+ch);
  substring(ros, ans + to_string(code));
}

int main() {
  string str;
  cin>>str;

  substring(str, "");
  return 0;
}
