#include <bits/stdc++.h>

using namespace std;

void solve(int t) {
    int N, A, B;
    cin >> N >> A >> B;

    vector<int> Z(A), X(B), Y(B);
    
    for (int i = 0; i < A; i++) {
        cin >> Z[i];
    }
    vector<vector<int>> adj(N);
    for (int i = 0; i < B; i++) {
        cin >> X[i] >> Y[i];
        adj[X[i]].push_back(Y[i]);
        adj[Y[i]].push_back(X[i]);
    }

    int idx = -1; // memorizza qui l'indice della lampadina
    int num = -1; // memorizza qui il nxumero di interruttori

    // aggiungi codice...
    vector<int> dist(N, INT_MAX);
    queue<int> q;
    for (int a : Z) {
        dist[a] = 0;
        q.push(a);
    }
    while (!q.empty()) {
        int node = q.front();
        q.pop();
        for (int to : adj[node]) {
            if (dist[to] == INT_MAX) {
                dist[to] = dist[node] + 1;
                q.push(to);
            }
        }
    }
    for (int i = 0; i < N; i++) {
        if (dist[i] != INT_MAX) {
            if (dist[i] > num) {
                num = dist[i];
                idx = i;
            } else if (dist[i] == num) {
                if (idx == -1 || i < idx) {
                    idx = i;
                }
            }
        }
    }
    cout << "Case #" << t << ": " << idx << " " << ++num << "\n";
}

int main() {
    // se preferisci leggere e scrivere da file
    // ti basta decommentare le seguenti due righe:

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int T;
    cin >> T;

    for (int t = 1; t <= T; t++) {
        solve(t);
    }

    return 0;
}
