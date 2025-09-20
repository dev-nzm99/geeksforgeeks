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

/*You are required to complete this method*/

/* Function to get the middle of the linked list*/
/*K will always be in range */
class Solution {
  public:
    Node* deleteK(Node* head, int k) {
        Node* curr = head;
        Node* prev = NULL;
        int count = 0;
        while(curr!=NULL){
            count++;
            if(count%k == 0){
              prev->next = curr->next;
            }else{
              prev = curr;
            }
            curr = curr->next;
        }
        return head;
    }
};