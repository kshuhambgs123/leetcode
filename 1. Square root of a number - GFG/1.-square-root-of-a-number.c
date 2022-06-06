// { Driver Code Starts
//Initial Template for C

#include<stdio.h>
  

 // } Driver Code Ends
//User function Template for C

long long int floorSqrt(long long int x) 
{
    // Your code goes here   
      if (x==0 || x==1)
         return x;
       long long int low=0, high=x/2;
       while (low<=high){
           long long int mid=(low+high)/2;
           if (x>=mid*mid){
               if (x==mid*mid || x<(mid+1)*(mid+1))
                   return mid;
               low=mid+1;}
           else if (x<mid*mid)
               high=mid-1;
       }
  
    
}

// { Driver Code Starts.

int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		long long n;
		scanf("%ld", &n);
	
		printf("%ld\n", floorSqrt(n));
	}
    return 0;   
}
  // } Driver Code Ends