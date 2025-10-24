/*
 Author: Nazmul Islam
 Created: 2025-10-24 15:17
 Complexity: Using Single Queue - Push in O(n) and Pop() in O(1)
*/
class myStack {
    queue<int> q;
  public:
    void push(int x) {   //O(n)
        q.push(x);
        while(q.front() != x){
           q.push(q.front());
           q.pop();
       }
    }
    void pop() {       //O(1)
        if(!q.empty()) q.pop();
    }
    int top() {  
        return (q.empty())? -1:q.front();
    }
    int size() { 
        return q.size();
    }
};
