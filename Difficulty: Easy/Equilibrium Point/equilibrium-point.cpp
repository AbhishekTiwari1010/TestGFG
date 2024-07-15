//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to find equilibrium point in the array.
    // arr: input array
    int equilibriumPoint(vector<long long> &arr) {
        
        
        
        long long sum = 0;
        for(int i=0; i<arr.size(); i++) {
            sum += arr[i];
        }
        
        if(arr.size() == 1) {
            return 1;
        }
        
        
        long long sum2 = 0;
        for(int i=1; i<arr.size(); i++) {
            
            if(sum == arr[i-1] && arr[i] == 0) {
                return i;
            }
            
            if(i == arr.size()-1) {
                return -1;
            }
            
            sum2 += arr[i-1];
            long long curr = arr[i];
            
            if(sum2 == (sum-curr)/2 ) {
                return i+1;
            }
            
        }
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // To discard any leftover newline characters
    while (t--)   // while testcases exist
    {
        vector<long long> arr;
        string input;
        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        cout << ob.equilibriumPoint(arr) << endl;
    }
}
// } Driver Code Ends