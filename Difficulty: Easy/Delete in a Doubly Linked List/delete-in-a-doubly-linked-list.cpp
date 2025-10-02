/* Structure of Node
class Node {
  public:
    int data;
    Node *next;
    Node *prev;

    Node(int val) {
        data = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
Author: Nazmul Islam
*/

class Solution {
  public:
    Node* delPos(Node* head, int pos) {
        if(head == NULL) return head;
        Node* tmp = head;
        int idx = 1;
        while(tmp != NULL && idx<pos){
            tmp = tmp->next;
            idx++;
        }
        if(tmp == NULL)return head; //pos out of range
        if(tmp == head){            //deleteing head
            head = head->next;
            if(head != NULL){
                head->prev = NULL;
            }
            delete tmp;
            return head;
        }
        if(tmp->next == NULL){    //deleting last
            tmp->prev->next = NULL;
            delete tmp;
            return head;
        }
        //deleting middle
        tmp->prev->next = tmp->next;
        tmp->next->prev = tmp->prev;
        delete tmp;
        return head;
    }
};