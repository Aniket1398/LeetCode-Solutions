// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    
    public:
    //Function to return max value that can be put in knapsack of capacity W.
    int A[1002][1002];
    int kS(int W,int wt[],int val[],int n)
     {
         if(W==0||n==0)
            return 0;
         if(A[n][W]!=-1)
           {
               return A[n][W];
           }
           else
           {
               if(W>=wt[n-1])
                {
                    A[n][W]=max(val[n-1]+kS(W-wt[n-1],wt,val,n-1),kS(W,wt,val,n-1));
                
                    return A[n][W];
                }
                else
                 {
                    A[n][W]= kS(W,wt,val,n-1);
                 
                     return A[n][W];
                 }
           }
     }
    
    int knapSack(int W, int wt[], int val[], int n) 
    { 
       for(int i=0;i<=n;i++)
        for(int j=0;j<=W;j++)
         {
            A[i][j]=-1;
         }
         
    return kS(W,wt,val,n);     
    }
};

// { Driver Code Starts.

int main()
 {
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //reading number of elements and weight
        int n, w;
        cin>>n>>w;
        
        int val[n];
        int wt[n];
        
        //inserting the values
        for(int i=0;i<n;i++)
            cin>>val[i];
        
        //inserting the weights
        for(int i=0;i<n;i++)
            cin>>wt[i];
        Solution ob;
        //calling method knapSack()
        cout<<ob.knapSack(w, wt, val, n)<<endl;
        
    }
	return 0;
}  // } Driver Code Ends