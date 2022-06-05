class Solution {
public:
    int hammingWeight(uint32_t n) {
       // right shift >> we append 0 to left side  // for signed integer
        
        // left shift << we append 0 to right side
     int ans = 0;
        while(n){
            if(n&1){
                ans++;
            }
            n = n>>1;
        }
        return ans;
        
    }
};