// this header file includes queues.
#include <bits/stdc++.h>
using namespace std;

int main() {
  // initializing queue gq.
    queue<int> gq;
  // adding an element to the queue,
  // from back to front <-- out | <-- line/queue -- | <-- in.
    gq.push(21);
    gq.push(21);
    gq.push(21);
    gq.push(12);
    gq.push(12);
    gq.push(12);
  // front() returns the front element.
    cout<<"front: "<<gq.front()<<endl;
  // back() returns the last element in the queue.
    cout<<"back: "<<gq.back()<<endl;
  // pop() removes the element at the front.
    gq.pop();
  // empty() checks whether the queue gq is empty or not.
    while(!gq.empty()) {
      // printing the elements at the front of queue.
        cout<<gq.front()<<" ";
      // popping (removing from queue) the front element after printing it.
        gq.pop();
    }
    return 0;
}

