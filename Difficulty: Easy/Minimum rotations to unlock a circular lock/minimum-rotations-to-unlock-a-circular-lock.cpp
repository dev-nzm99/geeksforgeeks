// User function Template for C++

class Solution {
  public:
    int rotationCount(long long R, long long D) {
        int cnt = 0;
        int input_digit,code_digit;
        while(R || D){
            input_digit = R%10;
            code_digit = D%10;
            cnt += min(abs(input_digit-code_digit),10-abs(input_digit-code_digit)); 
            R/=10;D/=10;
        }
        return cnt;
    }
};