/*
 Author: Nazmul Islam
 Created: 2025-10-24 15:03
 Complexity:  Push in O(1) and [Pop() & top()] in O(n)
*/
class myStack {
    queue<int> q1,q2;

  public:
    void push(int x) {   //O(1)
        q1.push(x);
    }

    void pop() {       //O(n)
        if(q1.empty())return;
        while(q1.size() != 1){
            q2.push(q1.front());
            q1.pop();
        }
        q1.pop();
        swap(q1,q2);  //O(1)
    }

    int top() {  //O(n)
        if(q1.empty()) return -1;
        while(q1.size() != 1){
            q2.push(q1.front());
            q1.pop();
        }
        int val = q1.front();
        q1.pop();
        q2.push(val);
        swap(q1,q2);
        return val;
    }
    int size() { 
        return q1.size();
    }
};
