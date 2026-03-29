#include <bits/stdc++.h>
using namespace std;
using pll = pair<long long, long long>;

void mincammino(int N, int M, vector<int> X, vector<int> Y, vector<int> P, vector<long long>& D){
    long long INF = 1e16; 
    vector<vector<pll>> adj(N+1);
    for (long long i = 0; i < M; i++) {
        adj[X[i]].push_back({Y[i], P[i]});
    }
    D[0] = 0;
    for (long long i = 1; i < N; i++) D[i] = INF;
    priority_queue<pll, vector<pll>, greater<pll>> pq;
    vector<bool> visited (N, false);
    pq.push({0, 0});
    while (!pq.empty()){
        auto[a, b] = pq.top();
        pq.pop();
        if (a > D[b]) continue;
        if (visited[b]) continue;
        visited[b] = true;
        for (auto in : adj[b]){
            long long c = in.first;
            long long d = in.second;
            if (D[c] > D[b] + d){
                D[c] = D[b] + d;
                pq.push({D[c], c});
            }
        }
    }
    for (long long i = 0; i < N; i++) if (D[i] == INF) D[i] = -1;
} 



int main() {
    freopen ("input.txt", "r", stdin);
    freopen ("output.txt", "w", stdout);
    int N, M;
    cin >> N >> M;
    vector<int> X(M), Y(M), P(M);
    vector<long long> D(N);
    for (int i = 0; i < M; i++) {
        cin >> X[i] >> Y[i] >> P[i];
    }

    mincammino(N, M, X, Y, P, D);

    for (int i = 0; i < N; i++) {
        cout << D[i] << ' ';
    } 
    cout << '\n';
}
