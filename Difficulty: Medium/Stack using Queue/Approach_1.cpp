/*
 Author: Nazmul Islam
 Created: 2025-10-24 14:45
 Complexity: Push in O(n) and Pop() in O(1)
*/
class myStack {
    queue<int> q1,q2;

  public:
    void push(int x) {   //O(n)
        q2.push(x);
        while(!q1.empty()){   
            q2.push(q1.front());
            q1.pop();
        }
        swap(q1,q2); //O(1)
    }

    void pop() {       //O(1)
        if(q1.empty())return;
        q1.pop();
    }

    int top() {  
        return (q1.empty()) ? -1: q1.front();
        
    }
    int size() { 
        return q1.size();
    }
};
