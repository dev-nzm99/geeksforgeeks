/*
Author: Nazmul Islam
*/
class Solution {
  public:
    vector<int> nextGreater(vector<int> &arr){
        int n = arr.size();
        vector<int> res(n, -1);
        stack<int> stk;
        for(int i = 2*n-1; i>=0; --i){
            while(!stk.empty() && stk.top()<=arr[i%n]){
                stk.pop();
            }
            if(!stk.empty()) res[i%n] = stk.top();
            stk.push(arr[i%n]);
        }
        return res;
    }
};