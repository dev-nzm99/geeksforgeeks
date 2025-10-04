/*
class Node {
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }

};
Author: Nazmul Islam
*/

class Solution {
  public:
    int getMiddle(Node* head) {
        Node *slow_ptr,*fast_ptr;
        slow_ptr = fast_ptr = head;
        while(fast_ptr && fast_ptr->next){
            slow_ptr = slow_ptr->next;
            fast_ptr = fast_ptr->next->next;
        }
        return slow_ptr->data;
    }
};