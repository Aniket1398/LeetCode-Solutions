#include<bits/stdc++.h>
using namespace std;

int main() {
   int t;
   cin>>t;
   while(t--){
       int n,i,j,temp;
       cin>>n;
       int a[n];
       for(i=0;i<n;i++)
            cin>>a[i];
       for(i=0,j=n-1;i<j;i++,j--)
       {
          temp=a[i];
          a[i]=a[j];
          a[j]=temp;
         
       }
       for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
       cout<<endl;
       
       
      
   }
	return 0;
}