class Solution {
public:
    int trap(vector<int>& h) {
        int n = h.size();
        int ans=0;
    /* T(O(n^2))
        for(int i=1;i<n;i++){
            int lmax = height[i];
            for(int j=0;j<i;j++){
                lmax = max(lmax,height[j]);  
            }
            
            int rmax = height[i];
            for(int j = i+1;j<n;j++){
                rmax = max(rmax,height[j]);
            }
            ans  = ans + (min(lmax,rmax)-height[i]);
        }
    */
        int  lmax[n],rmax[n];
        lmax[0] = h[0];
        rmax[n-1] = h[n-1];
        
        // precompute leftmax
        for(int i=1;i<n;i++){
            lmax[i] = max(h[i],lmax[i-1]);
        }
         // precompute rightmax
        for(int i=n-2;i>=0;i--){
            rmax[i] = max(h[i],rmax[i+1]);
        }
        // store water lmax - rmax - h[i]
        for(int i=1;i<n;i++){
            ans += min(lmax[i],rmax[i]) - h[i];
        }
        
        return ans;
        
    }
};