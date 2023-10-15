//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int maxValue(int arr[], int N) {
        int min1=INT_MAX, max1=INT_MIN;
        int min2=INT_MAX, max2=INT_MIN;
        // cout<<sizeof(arr)/sizeof(int)<<" "<<N<<endl;
        for(int i=0.;i<N;i++){
            min1=min(min1,arr[i]+i);
            max1=max(max1,arr[i]+i);
            min2=min(min2,arr[i]-i);
            max2=max(max2,arr[i]-i);
            // cout<<"1"<<endl;
        }
        // cout<<min1<<" "<<max1<<" "<<min2<<" "<<max2<<endl;
        int maxi=max({max1 - min1, max2 - min2, INT_MIN});
        return maxi;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin>>N;
        
        int arr[N];
        
        for(int i=0; i<N; i++)
            cin>>arr[i];

        Solution ob;
        cout << ob.maxValue(arr,N) << endl;
    }
    return 0;
}
// } Driver Code Ends