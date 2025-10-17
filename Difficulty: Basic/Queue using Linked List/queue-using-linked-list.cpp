/*
Author: Nazmul Islam
Created: 2025-10-17 23:27
*/
class Node {
  public:
    int data;
    Node* next;

    Node(int new_data) {
        data = new_data;
        next = NULL;
    }
};

class myQueue {
  private:
    int currSize;
    Node* front, *rear;
  public:
    myQueue() {
        currSize = 0;
        front = rear = NULL;
    }

    bool isEmpty() {
        return front == NULL;
    }

    void enqueue(int x) {
        Node* newN = new Node(x);
        if(isEmpty()){
            front = rear = newN;
        }else{
            rear->next = newN;
            rear = newN;
        }   
        currSize++;
    }

    void dequeue() {
        if(isEmpty())return;
        Node* tmp = front;
        front = front->next;
        delete tmp;
        if(front == NULL) rear = NULL;
        currSize--;
    }

    int getFront() {
        if(isEmpty()) return -1;
        return front->data;
    }

    int size() {
        return currSize;
    }
};
