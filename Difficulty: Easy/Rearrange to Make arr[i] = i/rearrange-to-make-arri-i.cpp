// User function Template for C++

class Solution {
  public:
    void modifyArray(vector<int>& arr) {
        int n = arr.size();
        vector<int> res(n,-1);
        for(auto x:arr){
            if(x>=0 && x<n)res[x] = x;
        }
        arr = res;
        return;
    }
};
