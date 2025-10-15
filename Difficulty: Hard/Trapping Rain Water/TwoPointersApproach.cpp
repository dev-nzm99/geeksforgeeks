/*
Author: Nazmul Islam
Approach: Using two pointers
Complexity: O(n) time ,O(1) space
*/
class Solution {
  public:
    int maxWater(vector<int> &arr) {
        int n = arr.size();
        int lMax = arr[0];
        int rMax = arr[n-1];
        int left = 1,right = n-2,res = 0;
        while(left<=right){
            if(lMax < rMax){
                res += max(0,lMax - arr[left]);
                lMax = max(lMax,arr[left]);
                left++;
            }else{
                res += max(0,rMax-arr[right]);
                rMax = max(rMax,arr[right]);
                right--;
            }
        }
        return res;
    }
};
