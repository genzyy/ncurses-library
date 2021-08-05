// this header file contains everything.
#include<bits/stdc++.h>
using namespace std;

int main() {
  // creating a stack.
    stack<int> stack;
  // push function to add an element.
    stack.push(21);
    stack.push(21);
  // pop() removes the top most element.
    stack.pop();
    stack.pop();
    stack.push(21);
    stack.push(21);
    stack.push(21);
     while (!stack.empty()) {
       // top() returns the topmost element and can be printed using cout.
        cout << ' ' << stack.top();
        stack.pop();
    }
    return 0;
}
