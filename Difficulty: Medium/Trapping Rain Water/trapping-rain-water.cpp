//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution{

    // Function to find the trapped water between the blocks.
    public:
    long long trappingWater(int arr[], int n){
    long long vol = 0;
    int Lbnd = arr[0];
    int Rbnd = arr[n-1];
    
    int l=0, r=n-1;

        
        while(l<r) {
            if(Lbnd < Rbnd) {
                l++;
                Lbnd = max(Lbnd,arr[l]);
                vol += Lbnd-arr[l];
            }
            
            else {
                r--;
                Rbnd = max(Rbnd,arr[r]);
                vol += Rbnd-arr[r];
            }
        }
        
        return vol;
        
    }
};

//{ Driver Code Starts.

int main(){
    
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        
        int a[n];
        
        //adding elements to the array
        for(int i =0;i<n;i++){
            cin >> a[i];            
        }
        Solution obj;
        //calling trappingWater() function
        cout << obj.trappingWater(a, n) << endl;
        
    }
    
    return 0;
}
// } Driver Code Ends