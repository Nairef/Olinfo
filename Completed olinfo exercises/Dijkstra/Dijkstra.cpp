#include <bits/stdc++.h>
using namespace std;
using pll = pair<long long, long long>;
int main(){
    freopen ("input.txt", "r", stdin);
    freopen ("output.txt", "w", stdout);  
    int N, M;
    cin >> N >> M;
    vector<vector<pll>> adj(N + 1);
    int from, obj;
    cin >> from >> obj;
    for (int i = 0; i < M; i++) {
        int u, v;
        long long w;
        cin >> u >> v >> w;
        adj[u].push_back({v, w});
    }
    long long INF = 1e16;
    vector<long long> dist(N + 1, INF);
    vector<bool> visited(N + 1, false);
    priority_queue<pll, vector<pll>, greater<pll>> pq;
    dist[from] = 0;
    pq.push({0, from});
    while (!pq.empty()) {
        auto [d, u] = pq.top();
        pq.pop();
        if (d > dist[u]) continue; 
        if (u == obj) break;
        if (visited[u]) continue;
        visited[u] = true;
        for (auto& edge : adj[u]) {
            int v = edge.first;
            int w = edge.second;
            if (dist[v] > dist[u] + w) {
                dist[v] = dist[u] + w;
                pq.push({dist[v], v});
            }
        }
    }
    cout << dist[obj] << endl;
    return 0;
}