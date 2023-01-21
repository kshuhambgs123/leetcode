//{ Driver Code Starts
#include <iostream>
using namespace std;

long long int longestSubarry(long long int *arr, long long int n);

// Driver code
int main() {
    long long int t, i;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        long long int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        cout << longestSubarry(arr, n) << endl;
    }
    return 0;
}

// } Driver Code Ends


long long int longestSubarry(long long int A[], long long int N) {
    
    //int m = A[0];
    int c = 0;
    int m = 0;
    for(int i=0;i<N;i++){
        
        if(A[i]>0){
            c++;
        }
        else{
            c=0;
            continue;
        }
        m = max(m,c);
    }
    return m;
}