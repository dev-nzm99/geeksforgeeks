/*
 Author: Nazmul Islam
 Created: 2025-10-26 00:09
 Complexity: O(n) Time and O(n) Space
*/

class Solution {
  public:
    vector<int> calculateSpan(vector<int>& arr) {
         int n = arr.size();
         vector<int> res(n, 0);
         stack<int> stk;
         for(int i = 0; i<n; ++i){
             while(!stk.empty() && arr[stk.top()] <= arr[i]) stk.pop();    
             res[i] = (stk.empty())? (i+1) : (i - stk.top());
             stk.push(i);
         }
         return res;
    }
};