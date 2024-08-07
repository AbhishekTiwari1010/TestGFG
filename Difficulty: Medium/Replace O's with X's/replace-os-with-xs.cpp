//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
    private:
    void dfs(vector<vector<char>>& mat, vector<vector<int>>& vis,
        int delR[], int delC[],int i, int j) {
                    
      vis[i][j] = 1;
        int n = mat.size();
        int m = mat[0].size();
        
        
            
            for(int k=0; k<4; k++) {
                int nr = i+delR[k];
                int nc = j+delC[k];
                
                if(nr>=0 && nr<n && nc>=0 && nc<m && 
                    mat[nr][nc] == 'O' && !vis[nr][nc]) {
                    dfs(mat,vis,delR,delC,nr,nc);
                }
            }
            
    }
    
    
public:
    vector<vector<char>> fill(int n, int m, vector<vector<char>> mat)
    {
        int delR[] = {-1, 0, +1, 0};
        int delC[] = {0, -1, 0, +1};
        
        vector<vector<int>> vis(n, vector<int>(m,0));
        
        
        for(int i=0; i<n; i++) {
            if(mat[i][0] == 'O' && vis[i][0] == 0) {
                dfs(mat,vis,delR,delC,i,0);
            }
            
            if(mat[i][m-1] == 'O' && vis[i][m-1] == 0) {
               dfs(mat,vis,delR,delC,i,m-1);
            }
        }
        
        for(int j=0; j<m; j++) {
            if(mat[0][j] == 'O' && vis[0][j] == 0) {
                dfs(mat,vis,delR,delC,0,j);
            }
            
            if(mat[n-1][j] == 'O' && vis[n-1][j] == 0) {
                dfs(mat,vis,delR,delC,n-1,j);
            }
        }
        
        
        
        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                if(!vis[i][j] && mat[i][j] == 'O') {
                    mat[i][j] = 'X';
                }
            }
        }
        return mat;
        
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        vector<vector<char>> mat(n, vector<char>(m, '.'));
        for(int i = 0;i < n;i++)
            for(int j=0; j<m; j++)
                cin>>mat[i][j];
        
        Solution ob;
        vector<vector<char>> ans = ob.fill(n, m, mat);
        for(int i = 0;i < n;i++) {
            for(int j = 0;j < m;j++) {
                cout<<ans[i][j]<<" ";
            }
            cout<<"\n";
        }
    }
    return 0;
}
// } Driver Code Ends