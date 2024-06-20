//{ Driver Code Starts
// Program to find minimum number of platforms
// required on a railway station
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int findPlatform(int arr[], int dep[], int n) {
    vector<int>arrival;
    vector<int>depart;
    for(int i=0;i<n;i++){
        arrival.push_back(arr[i]);
        depart.push_back(dep[i]);
    }
    sort(arrival.begin(),arrival.end());
    sort(depart.begin(),depart.end());
    int i=1,j=0;
    int plat=1;
    int maxi=1;
    while(i<n&&j<n){
        if(arrival[i]<=depart[j]){
            plat++;
            i++;
        }
        else if(arrival[i]>depart[j]){
            plat--;
            j++;
        }
        maxi=max(maxi,plat);
    }
    return maxi;
    }
};


//{ Driver Code Starts.
// Driver code
int main()
{
    int t;
    cin>>t;
    while(t--) 
    {
        int n;
        cin>>n;
        int arr[n];
        int dep[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        for(int j=0;j<n;j++){
            cin>>dep[j];
        }
        Solution ob;
        cout <<ob.findPlatform(arr, dep, n)<<endl;
    } 
   return 0;
}
// } Driver Code Ends