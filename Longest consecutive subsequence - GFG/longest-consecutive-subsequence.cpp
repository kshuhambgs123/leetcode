// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
  public:
    // arr[] : the input array
    // N : size of the array arr[]
    
    //Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int arr[], int N)
    {
      //Your code here
      unordered_set<int> s;
      for(int i=0;i<N;i++){
          s.insert(arr[i]);
      }
      
      int len = 0;
      for(int i=0;i<N;i++){
          if(!s.count(arr[i]-1)){
              int currNum = arr[i];
              int currLen = 1;
              
              while(s.count(currNum+1)){
                  currNum+=1;
                  currLen+=1;
              }
              len = max(len,currLen);
          }
          
      }
      return len;
    }
};

// { Driver Code Starts.
 
// Driver program
int main()
{
 int  t,n,i,a[100001];
 cin>>t;
 while(t--)
 {
  cin>>n;
  for(i=0;i<n;i++)
  cin>>a[i];
  Solution obj;
  cout<<obj.findLongestConseqSubseq(a, n)<<endl;
 }
      
    return 0;
}  // } Driver Code Ends