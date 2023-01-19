//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int carpetBox(int A, int B, int C, int D){
        //code here
        int moves = 0;
        
        int a  = max(A,B);
        int b = min(A,B);
        
        
        while (!(a <= max(C, D))) {

            a = a/2;
            if (a < b) {
                swap(a, b);
            }
            moves++;
        }

        while (!(b <= min(C,D))) {

            b = b/2;
            moves++;
        }
        return moves;
    }
};


//{ Driver Code Starts.


int main(){
    int t;
    cin>>t;
    while(t--){
        int A,B,C,D;
        cin>>A>>B>>C>>D;
        
        Solution ob;

        int ans = ob.carpetBox(A,B,C,D);
        
        cout<<ans<<endl;
    }
}
// } Driver Code Ends