/*
class Node {
  public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};
Author: Nazmul Islam
*/
class Solution {
  public:
    void removeLoop(Node* head) {
        Node *slow_ptr,*fast_ptr;
        fast_ptr = slow_ptr = head;
        
        //Step-1:Detect loop
        bool hasCycle = false;
        while(fast_ptr != NULL && fast_ptr->next != NULL){
            slow_ptr = slow_ptr->next;
            fast_ptr = fast_ptr->next->next;
            if(slow_ptr == fast_ptr){
               hasCycle = true;
               break;
            }
        }
        if(!hasCycle)return;
        
        //Step-2: Find starting of the loop
        slow_ptr = head;
        if(slow_ptr == fast_ptr){ //if loop start at head (special handling)
            while (fast_ptr->next != slow_ptr)fast_ptr = fast_ptr->next;
        }else{
            while(slow_ptr->next != fast_ptr->next){
                  slow_ptr = slow_ptr->next;
                  fast_ptr = fast_ptr->next;
            }
        }
        //Step-3:Break the loop
        fast_ptr->next = NULL;
        return;
    }
};
