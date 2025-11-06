
/*
 Author: Nazmul Islam
 UsingUsing the Sliding Window Technique 
 O(n) Time and O(1) Space
*/
class Solution {
  public:
    int maxSubarraySum(vector<int>& arr, int k) {
        int currSum;
        currSum = 0;
        //to find window sum
        for(int i = 0; i<k; ++i){
            currSum += arr[i];
        }
        int maxSum = currSum;
        
        //Compute sums
        for(int i = k; i<arr.size(); ++i){
            currSum += arr[i] - arr[i - k];
            maxSum = max(maxSum,currSum);
        }
        return maxSum;
    }
};