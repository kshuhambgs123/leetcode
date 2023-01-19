class Solution {
public:
    int subarraysDivByK(vector<int>& A, int K) {
    unordered_map<int, int> map;
    map[0] = 1;
    int sum = 0, res = 0;
    for (int i = 0; i < A.size(); i++) {
        sum = (sum + A[i]) % K;
        if (sum < 0) sum += K;
        res += map[sum]++;
    }
    return res;
}
};