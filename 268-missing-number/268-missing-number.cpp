class Solution {
public:
    int missingNumber(vector<int>& nums) {
       int n = nums.size(),ans = 0;
        sort(nums.begin(),nums.end());
        
        
        for(int i = 0;i<n;i++){
            if(nums[i]!=i){
                ans = i;
                break;
            }
            else if(nums[i]==n){
                ans=i;
                break;
            }else
                ans = n;
        }
        return ans;
    }
};