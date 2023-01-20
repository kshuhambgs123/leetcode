//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution
{
  public:
  int maxWeightCell(int N, vector<int> Edge)
  {
      // code here
      if(N==1)
        return 0;
     // if(Edge[0]==-1)
      //  return 0;
      
    
    unordered_map<int,int>m;
    for(int i=0;i<N;i++){
        if(m.find(Edge[i])==m.end()){
            m[Edge[i]] = i;
        }
        else
            m[Edge[i]]+=i; // hoghest index 
    }
    
    int mxm = INT_MIN;
    int loc = 0;
    for(auto i : m){
        if(mxm < i.second){
            mxm = i.second;
            loc = i.first;
        }
        else if(mxm == i.second){
            loc = max(loc,i.first);
        }
    }
    return loc;
  }
};

//{ Driver Code Starts.
int main(){
   int tc;
   cin >> tc;
   while(tc--){
      int N;
      cin >> N;
      vector<int> Edge(N);
      for(int i=0;i<N;i++){
        cin>>Edge[i];
      }
      Solution obj;
      int ans=obj.maxWeightCell(N, Edge);
      cout<<ans<<endl;
   }
   return 0;
}
// } Driver Code Ends