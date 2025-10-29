/*
 Author: Nazmul Islam
*/
class Solution {
  public:
    vector<vector<int>> separateChaining(int hashSize, vector<int>& arr) {
        vector<vector<int>> res(hashSize);
        int hashIdx;
        for(auto i: arr){
            hashIdx = i%hashSize;
            res[hashIdx].push_back(i);
        }
        return res;
    }
};