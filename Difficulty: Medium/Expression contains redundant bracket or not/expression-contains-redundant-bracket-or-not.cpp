/*
Author: Nazmul Islam
*/
class Solution {
  public:
    bool checkRedundancy(string &s) {
        stack<char> stk;
        for(auto x: s){
            if(x != ')'){
                stk.push(x);
            }else{
                bool hasOperator = false;
                while(!stk.empty() && stk.top() !='('){
                    char c = stk.top();
                    if(c=='+' || c=='-' || c=='*' || c=='/') hasOperator = true;
                    stk.pop();
                }
                if(!hasOperator) return true;
                if(!stk.empty()) stk.pop();
            }
        }
        return false;
    }
};
