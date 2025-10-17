
class Solution {
  public:
    int evaluate_exp(int n) {
        // Using Cassini’s Identity: f(n-1)*f(n+1) - f(n*n) = (-1)^n
        return (n&1)?-1:1;
    }
};