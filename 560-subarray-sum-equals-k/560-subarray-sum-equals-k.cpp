class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        
        // for fast I/O in C++
        
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        
        int n = nums.size();
        
        unordered_map<int,int>mp;
        int currSum = 0;
        int cnt = 0;
        
        for(int i=0;i<n;i++){
            currSum += nums[i];
            
            if(currSum == k) cnt++;
            
            if(mp.count(currSum-k)) 
                cnt+=mp[currSum-k];
            
            mp[currSum]++;
        }
        return cnt;
    }
};