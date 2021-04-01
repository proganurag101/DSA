#include<iostream>
using namespace std;
int main()
 {
 
int t{};
cin>>t;
int n{};
while(t--){
    
  
  cin>>n;
  long long  int arr[n]{};
    for(long int i{};i<n;i++){
        cin>>arr[i];
    }
    
    for(long int i{};i<n;i++){
        cout<<arr[n-i-1]<<" ";
    }
    cout<<endl;
    
}
 
 return 0;
}