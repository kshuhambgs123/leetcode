class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int n = nums.size();
        int temp = 0;
        int count = 0;
        int ans = 0;
        
        // bubble sort largest at end
        for(int i=0;i<n-1;i++){
            for(int j = 0;j<n-1-i;j++){
                if(nums[j]>nums[j+1]){
                    temp = nums[j];
                    nums[j] = nums[j+1];
                    nums[j+1] = temp;
                    
                }
            }
            
        }
        
        // cout<<nums[n-count]<<" ";
        // if(count == k){
        //             ans = nums[n-count];
        //         }
        
        return nums[n-k];
        
    }
};