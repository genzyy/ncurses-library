#include<bits/stdc++.h>
using namespace std;

void binary_search(int arr[], int n, int start, int end, int k) {
    int mid = (start + end) / 2;
    //cout<<mid<<endl;
    if(arr[mid] == k) cout<<mid<<" ans";
    else if(arr[mid] > k) binary_search(arr, n, 0, mid - 1, k);
    else if(arr[mid] < k) binary_search(arr, n, mid + 1, end, k);
    else cout<<"Element not found!";
}

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++) cin>>arr[i];
    int k;
    cin>>k;
    binary_search(arr, n, 0, n - 1, k);
    return 0;
}
