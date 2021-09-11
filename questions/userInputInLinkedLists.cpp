#include<bits/stdc++.h>
using namespace std;

struct node {
    int data;
    node *next;
};

int main() {
    int n, c = 0;
    node *head = new node;
    node *temp = new node;
    cin>>n;
    int num;
    cin>>num;
    head->data = num;
    for(int i = 2; i <= n; i++) {
        if(c == 0) {
            cin>>num;
            temp->data = num;
            head->next = temp;
            c++;
            
        } else {
            cin>>num;
            node *temp1 = new node;
            temp1->data = num;
            temp1->next = NULL;
            temp->next = temp1;
            temp = temp1;
        }
    }
    while(head != NULL) {
        cout<<head->data;
        head=head->next;
    }
    return 0;
}
