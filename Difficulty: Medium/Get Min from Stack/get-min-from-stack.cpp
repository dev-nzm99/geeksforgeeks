/*
Author: Nazmul Islam
*/
class SpecialStack {
    stack<pair<int,int>> stk;  //Using a Pair in Stack 
  public:
    SpecialStack() {
    }
    void push(int x) {
        int newMin = stk.empty() ? x : min(x,stk.top().second);
        stk.push({x,newMin});
        return;
    }
    void pop() {
        if(!stk.empty()){
            stk.pop();
        }
    }
    int peek() {
        if(stk.empty()){
            return -1;
        }
        return stk.top().first;
    }
    bool isEmpty() {
        return stk.empty();
    }
    int getMin() {
        if(stk.empty()){
            return -1;
        }
        return stk.top().second;
    }
};
