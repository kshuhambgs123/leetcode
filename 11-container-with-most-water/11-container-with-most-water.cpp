class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        // int maxws = 0;
        // for(int i=0;i<n;i++){
        //     for(int j=i+1;j<n;j++){
        //         int ws = min(height[i],height[j]) *(j-i);
        //         maxws = max(maxws,ws);
        //     }
        // }
        // return maxws;
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        
        // TC:O(N) SC:(1)
        int l = 0,r=n-1;
        int maxws = 0;
        while(l<=r){
            int ws = min(height[l],height[r]) *(r-l);
            maxws = max(maxws,ws);
            if(height[l]<height[r]){
                l++;
            }else{
                r--;
            }
        }
        return maxws;
    }
};