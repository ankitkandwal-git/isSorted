#include<bits/stdc++.h>
using namespace std;

bool bfs(int start,vector<vector<int>>& adj,vector<int>& visited){
    queue<int>q;
    q.push(start);
    visited[start ] = 0;
    while(!q.empty()){
        int cur = q.front();
        q.pop();
        for(int k:adj[cur]){
            if(visited[k] ==-1){
                q.push(k);
                visited[k] = 1 - visited[cur];
            } 
            else if(visited[k]==visited[cur]){
                return false;
            }
        } 
    }
    return true;
}

bool isBipartite(vector<vector<int>>& adj, int n) {
    vector<int> visited(n, -1);
    for(int i = 0; i < n; i++) {
        if(visited[i] == -1) {
            if(!bfs(i, adj, visited)) {
                return false;
            }
        }
    }
    return true;
}

int main(){
    int m,n;
    cin>>m>>n;
    vector<vector<int>> adj(m);
    for(int i=0;i<n;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    if(isBipartite(adj, m)){
        cout<<"YES"<<endl;
    } else {
        cout<<"NO"<<endl;
    }
    return 0;
}