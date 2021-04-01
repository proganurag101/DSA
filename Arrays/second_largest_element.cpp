
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
   public:
    int print2largest(int arr[], int arr_size)
   
   
    {   int max,secmax;
     max=secmax=INT_MIN;
   
    for(int i{};i<arr_size;i++){
        if(arr[i]>max){
            secmax = max;
            max=arr[i];
        }else if(arr[i]>secmax && arr[i]<max){
            secmax = arr[i];
        }
            
        }
    
    
    
  
    
    if(arr[0]==arr[1]==arr[2]){
        secmax = -1;
    }
    	
    	
    	
    	return secmax;
    }

};

// { Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	      cin>>arr[i];
	    Solution ob;  
	    int ans=ob.print2largest(arr, n);
	    cout<<ans;
	    cout<<"\n";
	}
	return 0;
}
  // } Driver Code Ends