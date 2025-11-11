/*
  Author:Nazmul Islam
  Using Sliding Window Pattern (Variable Size)
  Complexity: O(n) time & O(n) space
*/
class Solution {
  public:
    int smallestSubstring(string S) {
        int cnt = 0;
        int minCnt = INT_MAX;
        int l = 0;
        int arr[3] = {};  //for tracking frequency 
        for(int r = 0; r<S.length();++r){
            arr[S[r]-'0']++;
            cnt += (arr[S[r]-'0'] == 1);
            if(cnt == 3){
                while(arr[S[l]-'0'] > 1){
                    arr[S[l]-'0']--;
                    l++;
                } 
                minCnt = min(minCnt, r-l+1);
            }
        }
        return (minCnt == INT_MAX)?-1:minCnt;
    }
};
