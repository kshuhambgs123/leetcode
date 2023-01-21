class Solution {
public:
    int maxAbsValExpr(vector<int>& arr1, vector<int>& arr2) {
        int n = arr1.size();
        int max1 = INT_MIN;
        int max2 = INT_MIN;
        int max3 = INT_MIN;
        int max4 = INT_MIN;
        
        int min1 = INT_MAX;
        int min2 = INT_MAX;
        int min3 = INT_MAX;
        int min4 = INT_MAX;
            
        int r1 = 0, r2 = 0, r3 = 0, r4 = 0;
        
        for(int i=0;i<n;i++){
            
            max1 = max(max1,arr1[i]+arr2[i]+i);
            min1 = min(min1,arr1[i]+arr2[i]+i);
            
            max2 = max(max2,arr1[i]+arr2[i]-i);
            min2 = min(min2,arr1[i]+arr2[i]-i);
            
            max3 = max(max3,arr1[i]-arr2[i]+i);
            min3 = min(min3,arr1[i]-arr2[i]+i);
            
            max4 = max(max4,arr1[i]-arr2[i]-i);
            min4 = min(min4,arr1[i]-arr2[i]-i);
            
            r1 = max1-min1;
            r2 = max2-min2;
            r3 = max3-min3;
            r4 = max4-min4;
        }
        return max(max(r2,r1),max(r3,r4));
    }
};