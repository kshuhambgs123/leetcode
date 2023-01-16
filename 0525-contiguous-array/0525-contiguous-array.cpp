class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n = nums.size();
        
        unordered_map<int,int> m;
        int p_sum = 0, res = 0;
        
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                nums[i] = -1;
            }
            p_sum += nums[i];
            if(p_sum == 0) res = i+1;
            if(m.find(p_sum)==m.end()) m.insert({p_sum,i});
            
            res = max ( res , i-m[p_sum]);
        }
        return res;
    }
};