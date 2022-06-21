class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int n = nums.size();
        int temp = 0;
        int count = 0;
        int ans = 0;
        
        // bubble sort largest at end
        for(int i=0;i<k;i++){
            for(int j = 0;j<n-1-i;j++){
                
                if(nums[j]>nums[j+1]){
                    
                    temp = nums[j];
                    nums[j] = nums[j+1];
                    nums[j+1] = temp;
                    
                }
            }
            // count++;  // after 1st iteration of i take count of largest at end  if equal to k then return n-k;
            // if(count == k){
            //     ans = k;
            //     break;
            //}
            
        }
        return nums[n-k];    
    }
};