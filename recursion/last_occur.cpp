#include<bits/stdc++.h>
using namespace std;

int last_occur(int arr[], int start, int end, int num) {
  if(start == end) return -1;
  if(arr[start] == num) return start;
  return last_occur(arr, start-1, 0, num);
}

int main() {
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++) cin>>arr[i];
  int d;
  cin>>d;
  int index = last_occur(arr, n-1, 0, d);
  if(index == -1) cout<<"Not Found!";
  else cout<<index;
  return 0;
}
