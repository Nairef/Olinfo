#include <bits/stdc++.h>

using namespace std;

void solve(int t) {
    int N, M, Q;
    cin >> N >> M >> Q;

    // Aggiungi codice se vuoi
    char temp;
    string risposta;
    vector<string> bins(M);
    cin >> bins[0];
    for (int i = 0; i < Q; i++) {
        char type;
        int a, b;
        cin >> type >> a >> b;
        if (type == 's') {
            // Aggiungi codice...
            temp = bins[a].back();
            bins[a].pop_back();         
            bins[b].push_back(temp);
        } if(type == 'c') {
            // Aggiungi altro codice...
            risposta.push_back(bins[a][b]);
        }
    }


    cout << "Case #" << t << ": " << risposta << endl;
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
