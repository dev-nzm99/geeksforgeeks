class Solution {
  public:
    int countIncreasing(vector<int>& arr) {
      int res = 0;
      int len = 1;
      for(int i = 0;i<arr.size()-1;++i){
          if(arr[i] < arr[i+1]){
              ++len;
          }else{
              res += (len*(len-1))/2;
              len = 1;
          }
      }
       res += (len*(len-1))/2;
       return res;
    } 
};
