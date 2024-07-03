//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
    private:
    void dfs(vector<vector<int>> &grid, int r, int c,
        vector<vector<int>> &vis,int delR[], int delC[]) {
            
        int n = grid.size();
        int m = grid[0].size();
        vis[r][c] = 1;
        
        for(int k=0; k<4; k++) {
            int nr = r+delR[k];
            int nc = c+delC[k];
            
            if(nr>=0 && nr<n && nc>=0 && nc<m &&
                grid[nr][nc] == 1 && !vis[nr][nc]) {
                    dfs(grid,nr,nc,vis,delR,delC);
            }
            
        }
    }
    
    
  public:
    int numberOfEnclaves(vector<vector<int>> &grid) {
        
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> vis(n, vector<int>(m,0));
        
        int delR[] = {-1, 0, +1, 0};
        int delC[] = {0, -1, 0, +1};
        
        for(int i=0; i<n; i++) {
            if(grid[i][0] == 1) {
                dfs(grid,i,0,vis,delR,delC);
            }
            if(grid[i][m-1] == 1) {
                dfs(grid,i,m-1,vis,delR,delC);
            }
        }
        for(int i=0; i<m; i++) {
            if(grid[0][i] == 1) {
                dfs(grid,0,i,vis,delR,delC);
            }
            if(grid[n-1][i] == 1) {
                dfs(grid,n-1,i,vis,delR,delC);
            }
        }
        
        int cnt = 0;
        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                if(grid[i][j] == 1 && !vis[i][j]) {
                    cnt++;
                } 
            }
        }
        return cnt;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> grid(n, vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        cout << obj.numberOfEnclaves(grid) << endl;
    }
}
// } Driver Code Ends