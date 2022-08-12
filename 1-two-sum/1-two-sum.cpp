class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int> v;
        for(int p1 = 0;p1<n;p1++){
            int numToFind = target - nums[p1];
            for(int p2 = p1+1;p2<n;p2++){
                if( numToFind == nums[p2]){
                    v.push_back(p1);
                    v.push_back(p2);
                    break;
                    
                }
            }
        }
        return v;   
    }
};