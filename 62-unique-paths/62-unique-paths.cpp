class Solution {
public:
    int uniquePaths(int m, int n) {
        int N = n+m-2; // right and down are n-1 and m-1
        
        int r = min(n,m) -1;
        
        double ans = 1;
        
        // compute nCr
        
        for(int i=1;i<=r;i++,N--){
            ans = ans*(N)/i;
        }
        return (int) ans;
        
    }
};