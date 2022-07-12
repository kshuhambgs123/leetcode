class Solution {
public:
    int fib(int n) {
  
        if(n<=1)
            return n;
        
        int prev2 = 0;
        int prev = 1;
        int curri = 0;
       // int curri = 0;
        for(int i = 2;i<=n;i++){
            curri = prev + prev2;
            prev2 = prev;
            prev  = curri;
        }
        
        return curri;
    }
};