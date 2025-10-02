/* Print he nth node in the linked list Node is defined as
/* Link list node
struct node
{
    int data;
    struct node* next;

    node(int x){
        data = x;
        next = NULL;
    }
};
Author: Nazmul islam*/

class Solution {
  public:
    int GetNth(Node *head, int index) {
       Node* tmp = head;
       int idx = 1;
       while(tmp != NULL){
          if(idx == index) return tmp->data;
          tmp = tmp->next;
          idx++;
       }
       return -1;
    }
};