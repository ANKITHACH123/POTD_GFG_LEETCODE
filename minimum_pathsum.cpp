class Solution {
public:
    int dp[201][201];
    int fun(int i,int j,vector<vector<int>>& grid){
        if(i<0 || j<0) return 1e9;
        if(i==0 and j==0) return grid[i][j];
        if(dp[i][j]!=-1) return dp[i][j];
        int up=grid[i][j]+fun(i-1,j,grid);
        int le=grid[i][j]+fun(i,j-1,grid);
        return dp[i][j]=min(up,le);
    }
    int minPathSum(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        memset(dp,-1,sizeof(dp));
        return fun(n-1,m-1,grid);
    }
};
