class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ind;
        ind.push_back(firstLastOccur(nums,target,-1));
        ind.push_back(firstLastOccur(nums,target,1));
        return ind;
    }
    int firstLastOccur(vector<int>& nums, int target,int k) {
        int ans = -1;
        int l = 0;
        int h = nums.size()-1;
        
        while(l<=h){
            int mid = l + (h-l)/2;
            
            if(target==nums[mid]){
                ans = mid;
                
                if(k == -1){ 
    // if go for first occuurence check further left of it
                    h = mid+k;
                }
                else
                    l = mid+k; 
    // if go for last occuurence check further right of it 
            }
            else if(target<nums[mid]){
                h = mid -1;
            }
            else{
                l=mid+1;
            }
        }
        return ans;
        
    }
    
};