class Solution {
public:
    int trap(vector<int>& height) {
        int lm = 0;
        int rm = 0;
        int ws = 0;
        
        int l=0;
        int r = height.size()-1;
        
       while(l<r){
            lm = max(height[l],lm);
            rm = max(height[r],rm);
           
           ws += (lm<rm) ? lm - height[l++] : rm - height[r--];
        }
        return ws;
    }
};