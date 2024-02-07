class Solution{
public:
    int dp[101][101];
    int fun(int i,int j,int arr[]){
        if(i==j) return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        int m=1e9;
        for(int k=i;k<j;k++){
            int l=fun(i,k,arr);
            int r=fun(k+1,j,arr);
            m=min(m,(l+r+(arr[i-1]*arr[k]*arr[j])));
        }
        return dp[i][j]=m;
    }
    int matrixMultiplication(int N, int arr[])
    {
        // code here
        memset(dp,-1,sizeof(dp));
        int c=fun(1,N-1,arr);
        return c;
    }
};