// User function Template for C++
class Solution {
  public:
    int cost(vector<int>& a) {
        return (a.size()-1)*(*min_element(a.begin(),a.end()));
    }
};