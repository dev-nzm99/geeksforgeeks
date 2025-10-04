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
    int lengthOfLoop(Node *head) {
        int cnt = 1;
        bool t =false;
        Node *slow_ptr,*fast_ptr;
        slow_ptr = fast_ptr = head;
        while(fast_ptr!=NULL && fast_ptr->next!=NULL){
            slow_ptr = slow_ptr->next;
            fast_ptr = fast_ptr->next->next;
            if(slow_ptr==fast_ptr){
                t = true;
                break;
            }
        }
        if(!t) 
           return 0;
        else{
           Node* tmp = slow_ptr;
           while(tmp->next != slow_ptr){
               cnt++;
               tmp = tmp->next;
           }
           return cnt;
        }
    }
};