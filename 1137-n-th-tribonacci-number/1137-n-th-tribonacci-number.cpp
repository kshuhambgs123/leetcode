class Solution {
public:
    long long int memo[38] = {0};
    int tribonacci(int n) {
        if(n <= 1)
            return n;
        if(n==2)
            return 1;
        
        if(memo[n]!=0)
            return memo[n];

        return memo[n] = tribonacci(n - 1) + tribonacci(n - 2)+tribonacci(n-3);
    }
};