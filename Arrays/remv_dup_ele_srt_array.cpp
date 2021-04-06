//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution{
public:
    int remove_duplicate(int a[],int n){
       int temp[n];
       int j=0;
       if(n==0 || n==1){                  //simply return the size of the array if no or 1 element is present it already has no duplicate.
           return n;
       }
       for(int i{};i<n-1;i++){           // we take size - 1 to avoid the iteration on last element as its +1 will go out of bounds and will cause segmentation error.
           if(a[i]!=a[i+1]){             /* if the next element is not equal to current element we simply send the current element to our temp array and this our temp,
                                            array will have only those elements which were sent to temp when there was a  unique element present. */
                                           
            
               temp[j] = a[i];          //we assign our temp element the unique element which passed the condition.
               j++;                     //we increase index of our temp array so that the next passed element can be put there.
           }
             
       }
       
       temp[j++] = a[n-1];              //the last element is put into our temp.
       for(int i{};i<j;i++){  
           a[i] = temp[i];              // we reassign all elements of our temp array to our original array so that it can be used in main function.
       }
       
       return j;
       
    }
};

// { Driver Code Starts.
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        int a[N];
        for(int i=0;i<N;i++)
        {
            cin>>a[i];
        }
    Solution ob;
    int n = ob.remove_duplicate(a,N);
