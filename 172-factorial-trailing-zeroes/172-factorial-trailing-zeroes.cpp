class Solution {
public:
    int trailingZeroes(int n) {
        
        int ans = 0;
        for(int i=5;i<=n;i=i*5){
            ans=ans+n/i;
        }
        return ans;
        
        // TC - O(log(n))
        
        
        
        
        
        
        
        
//         long long int fact = 1;
//         for(long long int i=2;i<=n;i++){
//             fact = fact*i;
//         }
//         int res = 0;
        
//         while(fact%10==0){
//             res++;
//             fact=fact/10;
//         }
//         return res;
    }
};