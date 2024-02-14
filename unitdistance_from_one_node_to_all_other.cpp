#include<bits/stdc++.h>
using namespace std;

void sss(vector<int> adj[], int node, vector<int>& distances) {
    queue<pair<int,int>> q;
    q.push({node, 0}); 
    distances[node] = 0;
    while (!q.empty()) {
        int currNode = q.front().first;
        int dist = q.front().second;
        q.pop();
        for (auto neighbor : adj[currNode]) {
            if (distances[neighbor] == -1) {
                distances[neighbor] = dist + 1;
                q.push({neighbor, dist + 1});
            }
        }
    }
}

int main() {
    int n, e;
    cin >> n >> e;
    vector<int> adj[n + 1];
    for (int i = 0; i < e; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<int> distances(n + 1, -1);
    sss(adj, 1, distances);
    for (int i = 1; i <= n; i++) {
        cout << "Distance from node 1 to node " << i << ": " << distances[i] << endl;
    }
    return 0;
}
