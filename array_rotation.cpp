#include <bits/stdc++.h>
using namespace std;

void rotateArray(int arr[], int n, int d) {
  //cout<<d<<endl;

  if(d == n)
    return;

  int x = arr[n - 1];

  for(int i = n - 1;i>0;i--)
    arr[i] = arr[i-1];
    arr[0] = x;
    d+=1;
    rotateArray(arr,n,d);
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
      cin>>arr[i];
    rotateArray(arr,n,0);

    for(int i=0;i<n;i++)
      cout<<arr[i]<<" ";

    return 0;
}
