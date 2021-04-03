#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++
//logic
class Solution{
public:
	void pushZerosToEnd(int arr[], int n) {
	    vector<int> vec{};
	    for(int i{};i<n;i++){
	        if(arr[i]!=0){
	            vec.push_back(arr[i]);
	        }
	    }
	    for(int i{};i<n;i++){
	        if(arr[i]==0){
	            vec.push_back(arr[i]);
	        }
	    }
	    
	    for(int i{};i<vec.size();i++){
	        arr[i] = vec.at(i);
	    }
	   
	}
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.pushZerosToEnd(arr, n);
        for (i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}  // } Driver Code Ends