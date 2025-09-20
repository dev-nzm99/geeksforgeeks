/*
class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};
*/
class Solution {
  public:
    Node* deleteNode(Node* head, int pos) {
        Node* temp = head;
        if(pos == 1){
            head = temp->next;
            delete temp;
            return head;
        }
        Node* prev = NULL;
        for(int i = 1;i<pos;i++){
           prev = temp;
           temp=temp->next;
        }
        prev->next = temp->next;
        delete temp;
        return head;
    }
};