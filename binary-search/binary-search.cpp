class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0,h = nums.size()-1,idx = -1;
       // if(n==0)
        while(l<=h){
            int mid = l + (h-l)/2;
            if(nums[mid]==target){
                idx = mid;
                return idx;
            }
            else if(nums[mid]>target){
                h = mid-1;
            }else
                l = mid +1;
        }
        return idx;
    }
};