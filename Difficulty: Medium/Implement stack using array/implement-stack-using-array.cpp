/*
Author: Nazmul Islam
Created: 2025-10-24 11:42
*/
class myStack {
    int *arr;       
    int capacity;   
    int top;        
  public:
    myStack(int n) {
       capacity = n;
       arr = new int[capacity];
       top = -1;
    }

    bool isEmpty() {
        return top == -1;
    }

    bool isFull() {
        return top == capacity-1;
    }

    void push(int x) {
        if(isFull())return;
        arr[++top] = x;
    }

    void pop() {
        if(isEmpty())return;
        top--;
    }

    int peek() {
        return (isEmpty())? -1 : arr[top];
    }
};