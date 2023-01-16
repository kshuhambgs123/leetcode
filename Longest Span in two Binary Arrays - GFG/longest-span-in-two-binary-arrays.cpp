//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution {
public:
    int longestCommonSum(bool arr1[], bool arr2[], int n) {
            // code here 
        //int n = nums.size();
        int nums[n];
        unordered_map<int,int> m;
        int p_sum = 0, res = 0;
        
        for(int i=0;i<n;i++){
            nums[i] = arr1[i] - arr2[i];
            p_sum += nums[i];
            if(p_sum == 0) res = i+1;
            if(m.find(p_sum)==m.end()) m.insert({p_sum,i});
            
            res = max ( res , i-m[p_sum]);
        }
        return res;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        bool arr1[n], arr2[n];
        for (i = 0; i < n; i++) {
            cin >> arr1[i];
        }
        for (i = 0; i < n; i++) {
            cin >> arr2[i];
        }
        Solution ob;
        auto ans = ob.longestCommonSum(arr1, arr2, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends