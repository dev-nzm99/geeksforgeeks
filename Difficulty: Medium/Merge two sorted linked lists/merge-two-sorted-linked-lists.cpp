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
    Node* sortedMerge(Node* head1, Node* head2) {
        if(head1 == NULL || head2 == NULL){
            return (head1 == NULL)? head2 : head1;
        }
        if(head1->data <= head2-> data){
            head1->next = sortedMerge(head1->next,head2);
            return head1;
        }else{
            head2->next = sortedMerge(head1,head2->next);
            return head2;
        }
    }
};