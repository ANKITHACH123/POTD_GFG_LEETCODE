//rod cutting
-----------
#include<bits/stdc++.h>
using namespace std;
int dp[100000];
int fun(int a[],int n)
{
    if(n==0) return 0;
    if(dp[n]!=-1)
    {
        return dp[n];
    }
    int mainans=INT_MIN;
    for(int i=0;i<n;i++)
    {
        int l=i+1;
        int subp =a[i]+fun(a,n-l);
        mainans=max(mainans,subp);
    }
    return dp[n]=mainans;
    
}
int main()
{
    int n;
    cin>>n;
    memset(dp,-1,sizeof(dp));
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<fun(a,n);
}

/*
Count the nodes at distance K from leaf
---------------------------------------
class Solution
{
    public:
    //Function to return count of nodes at a given distance from leaf nodes.
    int c=0;
    bool check(Node* root, int k, int x)
    {
        if(!root) return false;
        if(x==k)
        {
            if(!root->left&&!root->right) return true;
            return false;
        }
        return check(root->left,k,x+1)||check(root->right,k,x+1);
    }
    void solve(Node* root, int k)
    {
        if(!root) return;
        if(check(root,k,0)) c++;
        solve(root->left,k);
        solve(root->right,k);
        
    }
    int printKDistantfromLeaf(Node* root, int k)
    {
        //Add your code here. 
        solve(root, k);
        return c;
    }
};
*/