class Solution {
public:
    vector<string> generateParenthesis(int n) {
    vector<string> res;
         string s = "";
        int open = 0, close = 0;
        if(n==0)
            return res;
        bt(res,s,open,close,n);
        return res;
    }
    
    void bt(vector<string> & res,string& s,int open,int close,int n){
        if(s.length() == n*2){
            res.push_back(s);
            return;
        }
        if(open<n){
            s.push_back('(');
            bt(res,s,open+1,close,n);
            s.pop_back();
        }
        if(close<open){
            s.push_back(')');
            bt(res,s,open,close+1,n);
            s.pop_back();
        }
    }
};