class Solution {
public:
    string getPermutation(int n, int k) {
        string str = "";
        for (int i = 1; i <= n; i++)
            str += to_string(i);
        int curPerm = 1;
        while (curPerm < k) {
            curPerm++;
            next_permutation(str.begin(), str.end());
        }
        return str;
    }
};