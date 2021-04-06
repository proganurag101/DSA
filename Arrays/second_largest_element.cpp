
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
        if(arr[i]>max){        //condition for max value
            secmax = max;     //the secmax is assigned the current value of max which is going to be re-assigned below.
            max=arr[i];       //now max has the largest value and sec max has second largest value
        }else if(arr[i]>secmax && arr[i]<max){   
            secmax = arr[i];    //this will include those values which are bigger than secmax hence they were not assigned before in the max value condition.
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
