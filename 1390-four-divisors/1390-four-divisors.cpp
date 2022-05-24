class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int res = 0;
        
        for(auto n : nums) {
            
            int p = 0; int v;
            for(int i = 2 ; i <= sqrt(n) ; i++) 
                if(n % i == 0) 
                    p += 2, v = i;
            if(p == 2 && v * v != n) 
                res += (1 + n + v + n / v);
        }
        
        return res;
    }
};