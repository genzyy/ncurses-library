#include<bits/stdc++.h>
using namespace std;

int maze(int n, int i, int j) {
  if(i == n-1 && j == n-1) return 1;

  if(i >= n || j >= n) return 0;

  int count = 0;
  count += maze(n, i+1, j) + maze(n, i, j+1);
  return count;
}

int main() {
  int dest;
  cin>>dest;
  int result = maze(dest, 0, 0);
  cout<<result<<endl;
  return 0;
}
