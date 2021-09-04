/*
Detect a cycle in a linked list. Note that the head pointer may be 'NULL' if the list is empty.

A Node is defined as: 
    struct Node {
        int data;
        struct Node* next;
    }
*/

bool has_cycle(Node* head) {
    Node *slowNode = head, *fastNode = head;
    while(slowNode && fastNode && fastNode->next) {
        fastNode = fastNode->next->next;
        slowNode = slowNode->next;
        if(slowNode == fastNode) return true;
    }
    return false;
}
