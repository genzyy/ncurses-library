#include<bits/stdc++.h>
using namespace std;

int main() {
    map<char, char>bracs;
    bracs[')'] = '(';
    bracs[']'] = '[';
    bracs['}'] = '{';
    int t;
    cin>>t;
    while(t--) {
        int flag = 0;
        string s;
        stack<char>str;
        cin>>s;
        for(int i = 0; s[i] != '\0'; i++) {
            if(s[i] == '(' || s[i] == '[' || s[i] == '{') 
                str.push(s[i]);
            else if(!str.empty() && bracs[s[i]] == str.top()) str.pop();
            else {
                flag = 1;
                break;
            }
        }
        if(!flag && str.empty()) cout<<"YES"<<endl;
        else cout<<"NO"<<endl; 
    }
    return 0;
}
