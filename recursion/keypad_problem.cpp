// A problem with alphabets similar to the alphabets we had in a keypad phone.
#include<bits/stdc++.h>
using namespace std;

string keypad[] = {"","./","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

void KP(string str, string ans) {
  if(str.length() == 0) {
    cout<<ans<<endl;
    return;
  }
  char ch = str[0];
  string ros = str.substr(1);
  string code = keypad[ch-'0'];

  for(int i=0;i<code.length();i++) {
    KP(ros, ans + code[i]);
  }
}

int main() {
  string str;
  cin>>str;
  KP("23", "");
  return 0;
}
