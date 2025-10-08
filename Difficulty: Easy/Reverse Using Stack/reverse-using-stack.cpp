class Solution {
  public:
    string reverse(const string& S) {
        string res = "";
        stack<char> stk;
        for(auto x : S){
            stk.push(x);
        }
        while(!stk.empty()){
            res += stk.top();
            stk.pop();
        }
        return res;
    }
};