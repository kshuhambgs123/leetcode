class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
         int n = nums.size();
        int cnt = 0;
        map<int,int> freq;
        
        for(int i=0;i<n;i++){
           
            freq[nums[i]]++;   
        }
        
        vector<pair<int,int>> v;
        vector<int> vec;
        
        map<int,int>:: iterator it;
        pair<int,int> p;
        for(it = freq.begin();it!=freq.end();it++){
            
            p.first = it->second;
            p.second = it->first;
            v.push_back(p);
        }
        
        sort(v.begin(),v.end(),greater<pair<int,int>>());
        int n1 = v.size();
        for(int i =0;i<k;i++){
            vec.push_back(v[i].second);
        }
        return vec ;  
    }

};