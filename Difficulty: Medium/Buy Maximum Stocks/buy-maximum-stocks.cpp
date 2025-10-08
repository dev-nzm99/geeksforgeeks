/*
Author: Nazmul Islam
*/
struct P{
  int idx;
  int price;
};
class Solution {
  public:
    static bool com(P a,P b){return a.price<b.price;}
    int buyMaximumProducts(int n, int k, int price[]) {
        vector<P> A(n);
        for(int i = 0;i<n;i++){
            A[i].idx = i+1;
            A[i].price = price[i];
        }
        sort(A.begin(),A.end(),com);
        int res = 0;
        int remaining = k;
        for(int i = 0;i<n;i++){
            int canBuy = min(A[i].idx,remaining/A[i].price);
            res+=canBuy;
            remaining -= A[i].price * canBuy;
        }
        return res;
    }
};
