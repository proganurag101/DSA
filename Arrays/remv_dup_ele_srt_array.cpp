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
       if(n==0 || n==1){
           return n;
       }
       for(int i{};i<n-1;i++){
           if(a[i]!=a[i+1]){
               temp[j] = a[i];
               j++;
           }
             
       }
       
       temp[j++] = a[n-1];
       for(int i{};i<j;i++){
           a[i] = temp[i];
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