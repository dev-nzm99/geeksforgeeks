/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
}*head;

Author: Nazmul Islam
*/

class Solution {
  public:
    void deleteNode(Node* del_node) {
       Node *del_nxt = del_node->next;
       del_node->data = del_nxt->data;
       del_node->next = del_nxt->next;
       delete del_nxt;
    }
};