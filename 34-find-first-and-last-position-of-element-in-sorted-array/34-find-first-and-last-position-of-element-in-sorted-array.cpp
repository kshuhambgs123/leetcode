class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> v(2);
        v[0] = search(nums,target,-1); // first occurence
        v[1] = search(nums,target,1); // last occurence
        
        return v;
        
    }
    
    int search(vector<int>& nums,int target,int t){
        int l = 0;
        int h =nums.size()-1;
        int idx = -1;
        
        while(l<=h){
            int mid = l + (h-l)/2;
            if(nums[mid]<target){
                l = mid+1;
            }
            else if(nums[mid]>target){
                h = mid -1;
            }
            else{ // if(nums[mid]==target)
                idx = mid; // occurence of target element at idx = mid;
                if(t==-1)
                    h = mid + t;
                else
                    l = mid + t;
            }
        }
        return idx;
    }
    
    
};