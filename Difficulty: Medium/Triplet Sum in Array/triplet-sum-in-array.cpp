//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:

    // Should return true if there exists a triplet in the
    // array arr[] which sums to x. Otherwise false
    bool find3Numbers(int arr[], int n, int x) {
        sort(arr,arr+n);
        int sum = 0;
        //int i =0;
        
        //while(i != n-3) {
        for (int i = 0; i < n; i++) {
            int j = i+1;
            int k = n-1;
            
            while(j<k) {
            int sum = arr[i] + arr[j] + arr[k];
            
                if(sum == x) {
                    return 1;
                }
                
                else if(sum <x) {
                    j++;
                }
                
                else {
                    k--;
                }
            }
            //i++;
        }
        return 0;
    }
};

//{ Driver Code Starts.

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n, X;
        cin >> n >> X;
        int i, A[n];
        for (i = 0; i < n; i++)
            cin >> A[i];
        Solution ob;
        cout << ob.find3Numbers(A, n, X) << endl;
    }
}

// } Driver Code Ends