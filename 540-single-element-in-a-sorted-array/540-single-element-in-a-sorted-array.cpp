class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int l = 0, h = nums.size() - 1;
        while (l < h) {
            int mid = l + (h - l) / 2;
            
            
            if (mid % 2 && nums[mid - 1] == nums[mid])
                l = mid + 1;
            else if (!(mid % 2) && nums[mid] == nums[mid + 1])
                l = mid + 2;
            
           
            else h = mid;
        }
        
    
        return nums[l];    
    }
};