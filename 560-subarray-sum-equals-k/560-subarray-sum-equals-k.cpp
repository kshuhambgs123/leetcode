class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        
        // for fast I/O in C++
        
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        
        int n = nums.size();
        
        unordered_map<int,int>mp; // create a map and take prefix sum and its cnt 
        int currSum = 0;
        int cnt = 0;
        
        for(int i=0;i<n;i++){
            currSum += nums[i]; // prefix sum till index
            
            if(currSum == k) cnt++;  // if prefsum equal to k increase count
            
            if(mp.count(currSum-k))   // check if prefsum-k is present if present increase cnt 
                cnt+=mp[currSum-k];
            
            mp[currSum]++; // update occurence at prefsum
        }
        return cnt;
    }
};