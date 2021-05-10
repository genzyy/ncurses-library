#include<bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++)
    cin>>arr[i];
  string str;
  stringstream s;
  // A stringstream associates a string object with a stream allowing you to read from the string as if it were a stream (like cin).
  for(int i=0;i<n;i++)
    s << arr[i];
  str = s.str();
  cout<<str;
  return 0;
}
