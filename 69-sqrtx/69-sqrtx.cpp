class Solution {
public:
    int mySqrt(int x) {
        int l = 0;
        int h = x;
         int ans = 1;
        
        while(l<=h){
            long long mid = l + (h-l)/2;
            
            if(mid*mid<=x){
             ans = mid;
            l = mid + 1;
        }
            else
            h = mid -1;
        }
      return ans;
        
    }
};