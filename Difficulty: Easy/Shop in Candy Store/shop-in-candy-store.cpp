class Solution {
  public:
    vector<int> minMaxCandy(vector<int>& prices, int k) {
        sort(prices.begin(),prices.end());
        int v ,n,minCost,maxCost;
        minCost = maxCost = 0;
        v=n= prices.size();
        for(int i = 0;i<n&&v>0;i++){
            minCost+=prices[i];
            v-=(k+1);
        }
        v = n;
        for(int j = n-1;j>=0&&v>0;j--){
            maxCost+=prices[j];
            v-=(k+1);
        }
        return {minCost,maxCost};
    }
};