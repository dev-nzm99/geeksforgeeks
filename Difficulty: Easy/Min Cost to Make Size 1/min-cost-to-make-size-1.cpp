// User function Template for C++
class Solution {
  public:

    int cost(vector<int>& arr) {
        int n = arr.size()-1;
        sort(arr.begin(),arr.end());
        return n*arr[0];
    }
};