/*
Author: Nazmul Islam
Approach: Using Monotonic Increasing Stack
*/
class Solution {
  public:
    vector<int> prevSmaller(vector<int>& arr) {
        int n = arr.size();
        vector<int> res(n, -1);
        stack<int> stk;
        for(int i = 0; i<n; ++i){
            while(!stk.empty() && stk.top()>=arr[i]){
                stk.pop();
            }
            if(!stk.empty()) res[i] = stk.top();
            stk.push(arr[i]);
        }
        return res;
    }
};