class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
      /*  sort(nums.begin(),nums.end());
        int n = nums.size();
        if(n==0)
            return 0;
        int res = 1;
        int curlen=1;
        for(int i=1;i<n;i++){
            if(nums[i]==nums[i-1]) continue;
            if(nums[i]==nums[i-1]+1)
                curlen++;
            else
            {
                res = max(res , curlen); 
                curlen = 1;
            } 
        }
            res = max(res , curlen); 
            return res;
            */
    int n = nums.size();
    if(n==0) return 0; 
   
   unordered_set<int> S;
        int ans = 0;
// Hash all the array elements
    for (int i = 0; i < n; i++)
        S.insert(nums[i]);
 
    // check each possible sequence from
    // the start then update optimal length
    for (int i = 0; i < n; i++)
    {
        // if current element is the starting
        // element of a sequence
        if (S.find(nums[i] - 1) == S.end())
        {
            // Then check for next elements
            // in the sequence
            int j = nums[i];
            while (S.find(j) != S.end())
                j++;
 
            // update  optimal length if
            // this length is more
            ans = max(ans, j - nums[i]);
        }
    }
    return ans;
    }
    };