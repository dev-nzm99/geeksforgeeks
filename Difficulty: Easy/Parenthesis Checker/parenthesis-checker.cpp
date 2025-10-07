//Author: Nazmul Islam

class Solution {
  public:
    bool isBalanced(string& str) {
        stack<int> stk;
        for(auto c : str){
            if(c=='(' || c=='{' || c=='['){
                stk.push(c);
            }else{
                if(stk.empty())return false;
                char top = stk.top();
                if((top!='(' && c==')')||
                  (top!='{' && c=='}')||
                  (top!='[' && c==']')){
                      return false;
                }else{
                    stk.pop();
                }
            }
        }
        return stk.empty();
    }
};