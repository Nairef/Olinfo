#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, Q;
    cin >> N >> Q;
    vector<int> C(N+1);
    vector<int> pos(N+1);
    for (int i = 1; i <= N; i++) {
        cin >> C[i];
        pos[C[i]] = i;
    }
    vector<int> counter(N+1, 0);
    pair<int, int> maxcar = {0, N+2};
    for (int q = 0; q < Q; q++) {
        int x;
        cin >> x;  
        counter[C[pos[x]-1]]++;
        if(maxcar.first == counter[C[pos[x]-1]])
            if (maxcar.second>C[pos[x]-1])
                maxcar = {counter[C[pos[x]-1]], C[pos[x]-1]};
        if (maxcar.first < counter[C[pos[x]-1]])
                maxcar = {counter[C[pos[x]-1]], C[pos[x]-1]};
        pos[x]--;
        pos[C[pos[x]]]++;
        swap(C[pos[x]], C[pos[x]+1]);
        cout << maxcar.second << '\n';  // print the result
    }
    return 0;
}