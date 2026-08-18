class Solution {
    public int maxSubarraySum(int[] arr, int k) {
        int n = arr.Length;
        int windowSum = 0, res = 0;
        for(int i = 0 ; i < k; ++i)
            windowSum += arr[i];
        
        res = windowSum;
        for(int i = k; i < n; ++i){
            windowSum = windowSum - arr[i-k] + arr[i];
            res = Math.Max(windowSum, res);
        }
        return res;
    }
}