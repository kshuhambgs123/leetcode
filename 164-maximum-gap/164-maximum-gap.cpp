class Solution {
public:
    int maximumGap(vector<int>& nums) {
        int res = INT_MIN;
        if(nums.size()<2)
            return 0;
        sort(nums.begin(),nums.end());
        
        for(int i=1;i<nums.size();i++){
            res = max(res,nums[i]-nums[i-1]);
        }
        return res;
        
    }
};