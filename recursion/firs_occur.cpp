#include<bits/stdc++.h>
using namespace std;

int first_occur(int arr[], int start, int end, int num) {
  if(start == end) return -1;
  //cout<<start<<" "<<end<<" "<<num<<endl;
  //cout<<arr[start]<<endl;

  if(arr[start] == num) return start;
  return first_occur(arr, start + 1, end, num);
}

int main() {
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++) cin>>arr[i];
  int d;
  cin>>d;
  int index = first_occur(arr, 0, n - 1, d);
  //cout<<index;
  if(index == -1) cout<<"Not Found!";
  else cout<<index;
  return 0;
}
