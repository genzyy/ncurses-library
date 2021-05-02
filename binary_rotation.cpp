#include <bits/stdc++.h>
using namespace std;
int find(int a[], int start, int end, int n)
{

    int mid;
    //int start=0, end=n;
    while (start <= end)
    {
        mid = (start + end) / 2;
        int next = (mid + 1) % n;
        int prev = (mid + n - 1) % n;

        if (a[mid] <= a[next] && a[mid] <= a[prev])
            return mid;

        else if (a[start] <= a[mid])
        {
            //start=mid+1;
            find(a, mid + 1, n, n);
        }
        else if (a[mid] <= a[end])
        {
            //end=mid-1;
            find(a, 0, mid - 1, n);
        }
        //else
        //return -1;
    }
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int loc = find(a, 0, n, n);
    cout << loc;

    return 0;
}