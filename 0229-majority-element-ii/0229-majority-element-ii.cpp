class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        int k = n/3;
        vector<int> v;
        unordered_map<int,int> m;
        for(int i=0;i<n;i++){
            m[nums[i]]++;
        }
        for(auto x : m){
            if(x.second>k)
                v.push_back(x.first);
        }
        return v;
    }
};