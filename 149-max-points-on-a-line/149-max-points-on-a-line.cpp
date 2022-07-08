class Solution {
public:
    int maxPoints(vector<vector<int>>& points) {
    map<pair<int, int>, int> mp;
        sort(points.begin(), points.end());
        int n = points.size();
        if (n == 0) return 0;
        int ans = 1;
        for (int i = 0; i < n; ++i) {
            int p = 0, m = 0;
            for (int j = i + 1; j < n; ++j) {
                if (points[j] == points[i])
                    p++;
                int x = points[j][0] - points[i][0];
                int y = points[j][1] - points[i][1];
                if ( x == 0 and y == 0)
                    continue;
                int g = __gcd(x, y);
                pair<int, int> a = {x / g, y / g};
                mp[a]++;
                m = max(m, mp[a]);
                
                    
            }
            ans = max(ans, m + p + 1);
            mp.clear();
            
        }
        
        return ans;
    }
};