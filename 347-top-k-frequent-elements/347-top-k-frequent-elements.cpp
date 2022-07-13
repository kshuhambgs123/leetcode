class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
       vector<int> res;
        map<int,int> m;
        for(auto x: nums){
            m[x]++;
        }
        vector<pair<int,int>> v;
        for(auto x:m){
            v.push_back({x.second,x.first});
        }
        sort(v.begin(),v.end(),greater<pair<int,int>>());
        
        for(int i=0;i<k;i++){
            res.push_back(v[i].second);
        }
        
        return res;   
    }
};