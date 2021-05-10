#include<bits/stdc++.h>
using namespace std;

int diceArray[] = {1, 2, 3, 4, 5, 6};

int boardGame(int start, int end) {
  if(start == end) return 1;

  if(start > end) return 0;

  int count = 0;

  for(int i=1; i<=6; i++)
    count += boardGame(start + i, end);
  return count;
}

int main() {
  int dest;
  cin>>dest;
  int result = boardGame(0,dest);
  cout<<result<<endl;
  return 0;
}
