
struct Item{
    int value;
    int weight;
    double pbw;
};
class Solution {
  public:
    static bool com(Item a,Item b){
        return a.pbw>b.pbw ?true:false;
    } 
    double fractionalKnapsack(vector<int>& val, vector<int>& wt, int capacity) {
       int n = val.size();
       vector<Item> p(n);
       for(int i =0;i<n;i++){
           p[i].value = val[i];
           p[i].weight = wt[i];
           p[i].pbw = (double)val[i]/wt[i];
       }
       sort(p.begin(),p.end(),com);
       int remainning = capacity;
       double res = 0.0;
       
       for(int i = 0;i<n && remainning>0;i++){
           if(p[i].weight<=remainning){
               res+=p[i].value;
               remainning-=p[i].weight;
           }else{
               res += p[i].value*((double)remainning/p[i].weight);
               remainning = 0;
           }
       }
       return res;
    }
};
