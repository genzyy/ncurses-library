#include<bits/stdc++.h>
using namespace std;

void arrange(int arr[], int n) {
  // Since we want positive = even place and negative = odd place
  int pos = 0, neg = 1;
  // the condition "pos >= 0 && neg >= 0" will always be
  // satisfied and hence is an infinite loop.
  while(pos >= 0 && neg >= 0) {
    // loop till it unsatisfies the condition.
    while(pos < n && arr[pos] >= 0) pos+=2;
    // loop till it unsatisfies the condition.
    while(neg < n && arr[neg] < 0) neg+=2;
    // here we have both the places of the array where
    // the element is wrongly places even place = negative number
    // and odd place = positive number
    // so to fix this we swap those two places which will probably
    // be adjacent elements.
    if(pos < n && neg < n)
      swap(arr[pos], arr[neg]);
    else break;
  }
  for(int i=0;i<n;i++) cout<<arr[i]<<endl;
}

int main() {
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++)
    cin>>arr[i];
  arrange(arr, n);
  return 0;
}
