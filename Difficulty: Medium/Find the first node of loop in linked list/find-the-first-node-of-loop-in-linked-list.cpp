/*
class Node {
public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

Author: Nazmul Islam
*/

class Solution {
  public:
    int cycleStart(Node* head) {
        Node *slow_ptr,*fast_ptr;
        fast_ptr = slow_ptr = head;
        bool t = false;
        while(fast_ptr != NULL && fast_ptr->next != NULL){
            slow_ptr = slow_ptr->next;
            fast_ptr = fast_ptr->next->next;
            if(slow_ptr == fast_ptr){
                t = true;
                break;
            }
        }
        if(!t)
            return -1;
        else{
            slow_ptr = head;
            while(slow_ptr != fast_ptr){
                slow_ptr = slow_ptr->next;
                fast_ptr = fast_ptr->next;
            }
            return slow_ptr->data;
        }
    }
};