#include<bits/stdc++.h>
using namespace std;

int knapsack(int wt[], int values[], int n, int w) {

  if(n == 0 || w == 0) return 0;

  if(wt[n-1] > w) return knapsack(wt, values,n-1, w);

  int r1 = knapsack(wt, values, n-1, w-wt[n-1]) + values[n-1];
  int r2 = knapsack(wt, values, n-1, w);

  int r = 0;
  r += max(r1, r2);
  return r;
}

int main() {
  int weights[] = {10, 20, 30};
  int values[] = {100, 50, 150};

  int res = knapsack(weights, values, 3, 50);
  cout<<res<<endl;
  return 0;
}
