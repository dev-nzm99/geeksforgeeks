/*
Author: Nazmul Islam
Created: 2025-10-23 15:43
Complexity: O(n) Time & O(n) Space
*/
class Solution {
  public:
    int getMaxArea(vector<int> &arr) {
        int n = arr.size();
        vector<int> nextSmaller(n,n);
        vector<int> prevSmaller(n,-1);
        stack<int> stk; 
        //logic to find next smaller element
        for(int i = n; i>=0 ;--i){
            while(!stk.empty() && arr[stk.top()]>=arr[i]) stk.pop();
            if(!stk.empty()) nextSmaller[i] = stk.top();
            stk.push(i);
        }
        while(!stk.empty()) stk.pop();
        //logic to find previous smaller element 
        for(int i = 0; i<n; ++i){
            while(!stk.empty() && arr[stk.top()] >= arr[i]) stk.pop();
            if(!stk.empty()) prevSmaller[i] = stk.top();
            stk.push(i);
        }
        int maxArea = 0;
        //logic for calculating maximum Rectangular Area
        for(int i = 0; i<n; ++i){
            int width = nextSmaller[i] - prevSmaller[i] - 1;
            int area = arr[i] * width;
            maxArea = max(maxArea, area);
        }
        return maxArea;
    }
};
