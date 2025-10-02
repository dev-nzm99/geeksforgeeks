/*
  Node is defined as
struct node
{
    int data;
    struct node* next;

    node(int x){
        data = x;
        next = NULL;
    }
}*head;
*/
class Solution {
  public:
    int count(struct Node* head, int key) {
       int cnt = 0;
       struct Node* tmp = head;
       while(tmp!= NULL){
           if(tmp->data == key)cnt++;
           tmp = tmp->next;
       }
       return cnt;
    }
};