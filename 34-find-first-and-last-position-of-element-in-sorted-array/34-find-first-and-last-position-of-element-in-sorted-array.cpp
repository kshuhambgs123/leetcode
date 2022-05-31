class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int temp = 0;
        vector<int> v(2);
        v[0] = first(nums,target,-1);
        v[1] = first(nums,target,1);
        return v;
    }
    
   int  first(vector<int>& nums, int target,int tog) {
        int low = 0;
        int high = nums.size()-1;
        int idx = -1;
       while(low<=high){
           int mid = (high-low)/2 + low;
           if(nums[mid]<target){
               low = mid + 1;
           }
           else if(nums[mid]>target){
               high = mid - 1;
           }
           else{
               idx = mid;
               if(tog==-1) high = mid + tog;
               else low = mid + tog;
           }
       }

           return idx;
   }
       
       
       // int  last(vector<int>& nums, int target) {
       //  int low = 0;
       //  int high = nums.size()-1;
       //  int idx = -1;
       // while(low<=high){
       //     int mid = (high-low)/2 + low;
       //     if(nums[mid]<=target){
       //         low = mid + 1;
       //     }
       //     else{
       //         low = mid -1;
       //     }
       //     if(nums[mid] == target){
       //         idx = mid;
       //     }
       // }
       //     return idx;
       // }
       
};