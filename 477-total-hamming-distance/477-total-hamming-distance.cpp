class Solution {
public:
    int totalHammingDistance(vector<int>& nums) {
        int res = 0;
        for(int i = 0;i<8*sizeof(int);i++){
            vector<int> count(2);
            for(const auto &num : nums){
                count[(num>>i)&1]++;
            }
            res = res + count[0] * count[1];
        }
        return res;
    }
};