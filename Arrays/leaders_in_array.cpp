#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

    

class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
       int max{0};
       vector<int> vec{};
       for(int i{n-1};i>=0;i--){            //we iterate from right we include first ele.(always leader),if our loop encounters a greater element we reassign it to our max
           if(a[i]>=max){                  //remember to make >= to include all elements which are leader and equal to its right.
               max = a[i];
               vec.push_back(max);         //keep pushing it in the new vector;
           }
       }
       reverse(vec.begin(),vec.end());    
        return vec;                       // this function has asked a vector as its return value.
    }
};

// { Driver Code Starts.

int main()
{
   long long t;
   cin >> t;//testcases
   while (t--)
   {
       long long n;
       cin >> n;//total size of array
        
        int a[n];
        
        //inserting elements in the array
        for(long long i =0;i<n;i++){
            cin >> a[i];
        }
        Solution obj;
        //calling leaders() function
        vector<int> v = obj.leaders(a, n);
        
        //printing elements of the vector
        for(auto it = v.begin();it!=v.end();it++){
            cout << *it << " ";
        }
        
        cout << endl;

   }
}
  // } Driver Code Ends