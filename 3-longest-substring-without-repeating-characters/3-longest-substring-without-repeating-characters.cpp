class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        vector<int>v(256,-1);
        
        int maxslen = 0,start = -1;
        for(int i=0;i!=n;i++){
            if(v[s[i]] > start)
                start = v[s[i]];
            v[s[i]] = i;
            maxslen = max(maxslen, i - start);
        }
        return maxslen;
    }
};