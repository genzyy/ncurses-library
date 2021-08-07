#include <iostream>
 
using namespace std;

void right_rotate_one(int a[], int num) {
    int temp = a[num - 1];
    for(int i = num - 1; i > 1; i--)
        a[i] = a[i - 1];
    a[1] = temp;
    //return a;
}

int main(int argc, char** argv)
{
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++) cin>>arr[i];
    int k;
    cin>>k;
    for(int i = 0; i < k; i++) {
        right_rotate_one(arr, n);
    }
    for(int i = 0; i < n; i++) cout<<arr[i]<<" ";
    return 0;
}
