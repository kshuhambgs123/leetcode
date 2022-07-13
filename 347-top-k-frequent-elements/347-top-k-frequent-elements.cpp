class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        int n = nums.size();
        int cnt = 0;
        map<int,int> freq; // make a freq map store freq of each key
        
        for(int i=0;i<n;i++){
            freq[nums[i]]++;   
        }
        
        vector<pair<int,int>> v;
        vector<int> vec;
        
        map<int,int>:: iterator it; // iterator for map
        pair<int,int> p; // pair for vector
        for(it = freq.begin();it!=freq.end();it++){ 
            p.first = it->second;
            p.second = it->first;
            v.push_back(p); // store freq and key in vector pair
        }
        
        sort(v.rbegin(),v.rend());
             //greater<pair<int,int>>()); // sort in decreasing order 
        int n1 = v.size();
        for(int i =0;i<k;i++){
            vec.push_back(v[i].second);
        }
        return vec ;  
    }

};