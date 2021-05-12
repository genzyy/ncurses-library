#include<bits/stdc++.h>
using namespace std;

void arrange(int a[], int n)
{
    int pcount=0, ncount=0;
   for(int i=0;i<n;i++)
   {
    if(a[i]>=0)
      {
        pcount = pcount + 1;
      }
    else
      {
        ncount = ncount + 1;
      }
   }
    int temp[pcount], semp[ncount], si = 0, sj = 0;
      for(int i=0;i<n;i++)
        {
          if(a[i]>=0)
          {
            temp[si] =a[i];
            si = si + 1;
            //cout<<a[i];
          }
          else
          {
            semp[sj]=a[i];
            sj = sj + 1;
            //cout<<a[i];
          }
        }


   int even=0, odd=1;
   int ni=0, nj=0;
   while(ni<si) {
     a[even] = temp[ni];
     even = even + 2;
     ni = ni + 1;
   }
   while(nj<sj) {
     a[odd] = semp[nj];
     odd = odd + 2;
     nj = nj + 1;
   }
   for(int i=0;i<n;i++)
    {
      cout<<a[i]<<" ";
    }
}

int main()
{
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++)
    {
      cin>>a[i];
    }
    arrange(a,n);


     return 0;
}
