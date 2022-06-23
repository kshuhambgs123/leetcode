class Solution {
public:
    
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        
        int r = grid.size();
        vector<int>a(r,0);
        vector<int>b(r,0);
        
        int sum = 0;
        for (int i = 0; i < r; i++){
            for (int j = 0; j < r; j++){
                a[i] = max(a[i], grid[i][j]);
                b[i] = max(b[i], grid[j][i]);
            }   
        }
        
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < r; j++) {
                sum += min(a[i], b[j]) - grid[i][j];
            }
        }
        return sum;
    }
};