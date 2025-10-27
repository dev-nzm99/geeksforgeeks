/*
 Author: Nazmul Islam
 Created: 2025-10-27 14:40
 Making Enqueue Operation Costly -
     Enqueue in O(n) and Dequeue() in O(1)
*/

class myQueue {

  private:
    stack<int> stk1,stk2;
    
  public:
    myQueue() {
    
    }
    void enqueue(int x){
        while(!stk1.empty()){
            stk2.push(stk1.top());
            stk1.pop();
        }
        stk1.push(x);
        while(!stk2.empty()){
            stk1.push(stk2.top());
            stk2.pop();
        }
    }

    void dequeue() {
        if(!stk1.empty()) stk1.pop();
    }

    int front() {
         return (stk1.empty()) ? -1: stk1.top();
    }

    int size() {
        return stk1.size();
    }
};
