/*
The structure of linked list is the following

struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};

Author: Nazmul Islam
Approach: Using HashSet
*/

class Solution {
  public:
    Node *removeDuplicates(Node *head) {
        unordered_set<int> heshSet;
        Node *curr = head,*prev = NULL;
        while(curr){
            if(heshSet.find(curr->data) != heshSet.end()){ 
                prev->next = curr->next; 
                Node *tmp = curr;
                curr = curr->next;
                delete tmp;
            }else{
                heshSet.insert(curr->data);
                prev = curr;
                curr = curr->next;
            }
        }
        return head;
    }
};
