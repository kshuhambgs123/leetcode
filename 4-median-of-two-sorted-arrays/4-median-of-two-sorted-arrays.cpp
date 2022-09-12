class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        if(nums2.size() < nums1.size()) return findMedianSortedArrays(nums2,nums1);
        int l = 0;
        int h = nums1.size();
        int n1 = nums1.size();
        int n2 = nums2.size();
        
        while(l<=h){
            int i1 = (l+h)>>1; // partition
            int i2 = (n1+n2+1)/2 -i1;
            
            
            int min1 = (i1==n1) ? INT_MAX : nums1[i1]; 
// if partition is of lenth of input means nothing on right side , use +INF for minright
            int max1 = (i1==0)  ? INT_MIN : nums1[i1-1];
            //if partition is of lenth of 0 means nothing on left side , use -INF for maxleft
            int min2 = (i2==n2) ? INT_MAX : nums2[i2];
            int max2 = (i2==0)  ? INT_MIN : nums2[i2-1];
            
            if(max1<=min2 && max2<=min1){
                // we have partitioned arrray correctly. now consider median in both case
                if( (n1+n2)%2 == 0)
                    return ( max(max1,max2) + min(min1,min2)) /2.0;
                else
                    return max(max1,max2);
            }
            else if(max1>min2){
                h = i1-1; // we are too far for right side partition. go to left
            }
            else{
                l = i1+1; // go to right ( max2> min1)
            }
        }
        return 0.0;
    }
};