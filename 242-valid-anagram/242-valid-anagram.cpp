class Solution {
public:
    bool isAnagram(string s, string t) {
        int n1 = s.length();
        int n2 = t.length();
        if(n1!=n2) return false;
        unordered_map<char,int>mp;
        
        for(int i=0;i<n1;i++){
            mp[s[i]]++;
            mp[t[i]]--;
        }
        
        for(auto count : mp){
            if(count.second)
            return false;
        }
        return true;         
    }
};