//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
    vector<int> findTwoElement(vector<int> arr, int n) {
        int dup, mis;
        
        //unordered_map<int,int> vis;
        vector<int> vis(n+1, 0);
        
        for(int i=0; i<n; i++) {
            vis[arr[i]]++;
        }
        
        
        for(int i=1; i<=n; i++) {
            if(vis[i] > 1){
                dup = i;
            }
            else if(vis[i] == 0) {
                mis = i;
            }
        }
        
        return {dup,mis};
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends