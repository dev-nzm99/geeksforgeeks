/*
Author: Nazmul Islam
Approach: Using Monotonic Decreasing Stack
Complexity: Time: O(n)  Space: O(n)
*/
class Solution {
  public:
    vector<int> nextLargerElement(vector<int>& arr) {
        int n = arr.size();
        vector<int> res(n,-1);
        stack<int> stk;
        for(int i = n-1;i>=0;--i){
            while(!stk.empty() && stk.top()<=arr[i]){
                stk.pop();
            }
            if(!stk.empty()) res[i] = stk.top();
            stk.push(arr[i]);
        }
        return res;
    }
};