//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
int mod = 1e9+7;
//     int nCr(int n, int r){
//         if(r>n) return 0;
        
//         else {
//             int nem = n;
//             long long ans1 = 1;
            
//             while(nem>0) {
//                 ans1 = ans1*nem;
//                 nem--;
//             }
            
//             int den1 = r;
//             long long ans2 = 1;
            
//             while(den1>0) {
//                 ans2 = ans2*den1;
//                 den1--;
//             }
            
//             int den2 = n-r;
//             long long ans3 = 1;
            
//             while(den2>0) {
//                 ans3 = ans3*den2;
//                 den2--;
//             }
            
            
//             int ans = (ans1/(ans2*ans3)) % mod;
//             return ans;
//         }
//     }


    int nCr(int n, int r){
        // code here
        if (r > n)
            return 0;
        vector<int> prev(r+1),curr(r+1);
        prev[0] = curr[0] = 1;
        if(r == n || r == 0){
            return 1;
        }
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= r; j++)
            {
                curr[j] = (prev[j - 1] + prev[j])%mod;
            }
            prev = curr;
        }
        return prev[r];
        
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, r;
        cin>>n>>r;
        
        Solution ob;
        cout<<ob.nCr(n, r)<<endl;
    }
    return 0;
}
// } Driver Code Ends