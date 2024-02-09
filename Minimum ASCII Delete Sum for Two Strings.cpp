class Solution {
    int dp[1001][1001];
public:
    //int p=0;
    int fun(int i,int j,string &s1,string &s2)
    {
        if(i>=s1.size()){
            int p=0;
            for(int k=j;k<s2.size();k++){
                p+=int(s2[k]);
            }
            return p;
        }
        if(j>=s2.size()){
            int p=0;
            for(int l=i;l<s1.size();l++){
                p+=int(s1[l]);
            }
            return p;
        }
        if(dp[i][j]!=-1) return dp[i][j];
        int pi=1e9;
        int ne=1e9;
        int mi=1e9;
        if(s1[i]!=s2[j]){
            pi=int(s1[i])+fun(i+1,j,s1,s2);
            ne=int(s2[j])+fun(i,j+1,s1,s2);
        }
        else{
            mi=fun(i+1,j+1,s1,s2);
        }
        return dp[i][j]=min(pi,min(mi,ne));
    }
    int minimumDeleteSum(string s1, string s2) {
        memset(dp,-1,sizeof(dp));
        return fun(0,0,s1,s2);
    }
};
