//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
int longestSubstrDistinctChars (string S);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;

        cout << longestSubstrDistinctChars (S) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends


int longestSubstrDistinctChars (string S)
{
    unordered_set<char> mp;
    
    int j = 0;
    int l = 0;
    
    for(int i =0; i<S.size(); i++) {
        char ch = S[i];
        
       while(mp.find(ch) != mp.end()) {
           mp.erase(S[j]);
           j++;
       }
       
        mp.insert(ch);
        l = max(l,i-j+1);
    }
    return l;
    }
