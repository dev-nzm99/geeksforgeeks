class Solution {
  public:
    static bool com(pair<int,int> a,pair<int,int> b){
        return a.second<b.second?true:false;
    }
    int activitySelection(vector<int> &start, vector<int> &finish) {
        int n = start.size();
        vector<pair<int,int>> V(n);
        for(int i = 0;i<n;i++)V.push_back(make_pair(start[i],finish[i]));
        sort(V.begin(),V.end(),com);
        int prev_end = V[0].second;
        int cnt = 0;
        for(auto i:V){
            if(i.first>prev_end){
                cnt++;
                prev_end = i.second;
            }
        }
        return cnt;
    }
};
