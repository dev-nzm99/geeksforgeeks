/* Link list Node

struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }

};
*/
/*The idea is to traverse the linked list while maintaining a counter to track node positions. 
Every time the counter reaches k, update the next pointer of the previous node to skip the current 
kth node, effectively removing it from the list. Continue this process until reaching the end of 
the list. This method ensures that the kth nodes are removed as required while preserving the rest 
of the list structure. */

/*Author:Nazmul*/
class Solution {
  public:
    Node* deleteK(Node* head, int k) {
        Node* curr = head;
        Node* prev = NULL;
        int count = 0;
        while(curr!=NULL){
            count++;
            if(count%k == 0){
              (prev != NULL) ? prev->next = curr->next : head = curr->next;
            }else{
              prev = curr;
            }
            curr = curr->next;
        }
        return head;
    }
};
