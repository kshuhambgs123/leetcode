class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        if(n==0)
            return 0;
        int res = 1;
        int curlen=1;
        for(int i=1;i<n;i++){
            if(nums[i]==nums[i-1]) continue;
            if(nums[i]==nums[i-1]+1)
                curlen++;
            else
            {
                res = max(res , curlen); 
                curlen = 1;
            } 
        }
            res = max(res , curlen); 
            return res;
    }
};