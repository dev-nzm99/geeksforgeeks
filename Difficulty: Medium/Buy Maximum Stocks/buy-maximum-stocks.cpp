struct P{
  int idx;
  int price;
};
class Solution {
  public:
    static bool com(P a,P b){return a.price<b.price;}
    int buyMaximumProducts(int n, int o, int price[]) {
        vector<P> A(n);
        int k = o;
        for(int i = 0;i<n;i++){
            A[i].idx = i+1;
            A[i].price = price[i];
        }
        sort(A.begin(),A.end(),com);
        int res = 0;
        for(int i = 0;i<n&&k>=0;i++){
            while(A[i].idx--){
                k-=A[i].price;
                if(k<0)break;
                else res++;
            }
        }
        return res;
    }
};
