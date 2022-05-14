class Solution {
public:
    int maxAbsValExpr(vector<int>& arr1, vector<int>& arr2) {
       int n = arr1.size();
        int max1 =INT_MIN ;
        int min1 = INT_MAX;
        
        int max2 =INT_MIN ;
        int min2 = INT_MAX;
        
        int max3 =INT_MIN ;
        int min3 = INT_MAX;
        
        int max4 =INT_MIN ;
        int min4 = INT_MAX;
    
        int t1 = 0,t2 =0,t3=0,t4=0;
        for(int i=0;i<n;i++){
            
         
            max1 = max((arr1[i] + arr2[i] + i),max1);
          
            
            min1 = min((arr1[i] + arr2[i] + i),min1);
           
            
            max2  = max((arr1[i] + arr2[i] - i),max2);
           
            
            min2 = min((arr1[i] + arr2[i] - i),min2);
           
            
            max3 = max((arr1[i] - arr2[i]-i),max3);
           
            
            min3 = min((arr1[i] - arr2[i] - i),min3);
           
        
            max4 =max((arr1[i] - arr2[i] + i),max4);
            
            min4 = min((arr1[i] - arr2[i] + i),min4);
           
            t1 = max1-min1;
            t2 = max2-min2;
            t3 = max3-min3;
            t4 = max4-min4;
            
            
        }
        
        return max(max(t1,t2),max(t3,t4));
        
    }
};