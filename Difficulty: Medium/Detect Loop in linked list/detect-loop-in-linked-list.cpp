/*
class Node {
   public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
}*/
/*Author: Nazmul Islam
 "slow–fast pointer approach(Floyd’s Cycle Finding Algorithm)"
*/

class Solution {
  public:
    bool detectLoop(Node* head) {
        Node* slow_ptr;
        Node* fast_ptr;
        slow_ptr = fast_ptr = head;
        while(fast_ptr != NULL && fast_ptr->next != NULL){
            slow_ptr = slow_ptr->next;
            fast_ptr = fast_ptr->next->next;
            if(slow_ptr == fast_ptr)return true;
        }
        return false;
    }
};