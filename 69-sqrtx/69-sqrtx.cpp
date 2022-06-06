class Solution {
public:
    int mySqrt(int x) {
        if (x==0 || x==1)
         return x;
        else{
            int ans = 0;
       long long int low=0, high=x/2;
       while (low<=high){
           long long int mid=(low+high)/2;
           if (x>=mid*mid){
               if (x==mid*mid || x<(mid+1)*(mid+1))
                   ans = mid;
               low=mid+1;
           }
           else if (x<mid*mid)
               high=mid-1;
       }
            return ans;
    }
    }
};