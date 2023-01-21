class Solution {
public:
    int mostWordsFound(vector<string>& s) {
        int n = s.size();
        int t = 1;
        for(int i=0;i<n;i++){
            int c = 1;
            int l = s[i].length();
                for(int j=0;j<l;j++){
                    if(s[i][j]==' ') {
                        c++;
                        t = max(t,c);
                    }
                }
        }
        return t;
    }
};