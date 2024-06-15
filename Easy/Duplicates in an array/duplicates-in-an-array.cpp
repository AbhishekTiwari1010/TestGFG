//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> duplicates(vector<long long> arr) {
        int n = arr.size();
        
        unordered_map<long long, int> vis;
        vector<int> ans;
        
        
        for(int i=0; i<n; i++) {
            vis[arr[i]]++;
        }
        
        for(auto& i: vis) {
           if(i.second > 1) {
               ans.push_back(i.first);
           }
       }
       
       if(ans.empty()) {
           ans.push_back(-1);
       }
       
       sort(ans.begin(), ans.end());
        
        return ans;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n;
        cin >> n;
        vector<long long> arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        Solution obj;
        vector<int> ans = obj.duplicates(arr);
        for (int i : ans)
            cout << i << ' ';
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends