//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int lenOfLongSubarr(int A[],  int N, int K) 
    { 
        unordered_map<long long, int> pSum;
        long long sum = 0;
        int l = 0;
        
        
        for(int i=0; i<N; i++) {
            
            sum += A[i];
            
            if(sum == K) {
                l = max(l,i+1);
            }
            
            if(pSum.find(sum-K) != pSum.end()) {
                l = max(l,i-pSum[sum-K]);
            }
             if (pSum.find(sum) == pSum.end()) {
                pSum[sum] = i;
            }
        }
        return l;
         
    } 

};

//{ Driver Code Starts.

int main() {
	//code
	
	int t;cin>>t;
	while(t--)
	{
	    int n, k;
	    cin>> n >> k;
	    int a[n];
	    
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution ob;
	   cout << ob.lenOfLongSubarr(a, n , k)<< endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends