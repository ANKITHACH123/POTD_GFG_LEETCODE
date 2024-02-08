class Solution {
public:
    // int mini=1e9;
    int dp[10000];
    int fun(int n,int c){
        int p;
        if(n<0) return 1e9;
        if(n==0)
        {
            return 0;
        } 
        int mini=1e9;
        if(dp[n]!=-1) return dp[n];
        for(int i=c;i*i<=n;i++){
            int p=1+fun(n-(i*i),i);
            mini=min(p,mini);
        }
        return dp[n]=mini;
    }
    int numSquares(int n) {
        memset(dp,-1,sizeof(dp));
        int h=fun(n,1);
        return h;
    }
};
