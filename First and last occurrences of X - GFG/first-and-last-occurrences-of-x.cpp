// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    vector<int> firstAndLast(vector<int> &arr, int n, int x) {
        // Code here
    int target = x;
       int temp = 0;
        vector<int> v(2);
        vector<int> v1(1);
        int t1 = first(arr,target,-1);
        int t2 = first(arr,target,1);
        if(t1!=-1 && t2!=-1){
        v[0] = first(arr,target,-1);
        v[1] = first(arr,target,1);
        
        return v;
        }
        else{
          v1[0] = -1;
          return v1;
        }
    }
    
   int  first(vector<int>& arr, int target,int tog) {
        int low = 0;
        int high = arr.size()-1;
        int idx = -1;
       while(low<=high){
           int mid = (high-low)/2 + low;
           if(arr[mid]<target){
               low = mid + 1;
           }
           else if(arr[mid]>target){
               high = mid - 1;
           }
           else{
               idx = mid;
               if(tog==-1) high = mid + tog;
               else low = mid + tog;
           }
       }

           return idx;
   }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        Solution obj;
        vector<int> ans= obj.firstAndLast(arr, n, x) ;
        for(int i:ans){
            cout<<i<<" ";
        }
        cout<< endl;
    }
    return 0;
}
  // } Driver Code Ends