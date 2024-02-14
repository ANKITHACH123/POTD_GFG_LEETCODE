#include<bits/stdc++.h>
using namespace std;
void bfs(vector<int>adj[],int node,vector<int>&vi){
    queue<int>q;
    q.push(node);
    vi[node]=1;
    while(!q.empty())
    {
        int t=q.front();
        cout<<top<<" ";
        q.pop();
        for(auto it:adj[t]){
            if(!vi[it]){
                q.push(it);
                vi[it]=1;
            }
        }
    }
}
int main(){
    int n,e;
    cin>>n>>e;
    vector<int>adj[n+1];
    for(int i=0;i<e;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<int>vi(n+1,0);
    bfs(adj,1,vi);
}
