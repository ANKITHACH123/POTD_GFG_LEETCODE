void dfs(int i,vector<int>adj[],vector<int>&vi,vector<int>&l){
        vi[i]=1;
        l.push_back(i);
        for(auto it:adj[i]){
            if(vi[it]!=1){
                dfs(it,adj,vi,l);
            }
        }
    }
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        vector<int>l;
        vector<int>vi(V+1,0);
        dfs(0,adj,vi,l);
        return l;
