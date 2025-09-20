/*
class Node {
  public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
}; */

class Solution {
  public:
    bool searchKey(Node* head, int key) {
        Node* tmp = head;
        while(tmp!=NULL){
            if(tmp->data == key)
                return true;
            tmp = tmp->next;
        }
        return false; 
    }
};
