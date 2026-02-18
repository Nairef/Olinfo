#include <bits/stdc++.h>
using namespace std;

vector<long long> calcola(int T, int M, vector<long long> S, vector<long long> P) {
    vector<long long> R(M, 0);

    // scrivi qui il codice della tua soluzione

    vector<int64_t> clone (T);
    for (int j=0;j<M;j++){
        int i=0;
        for (int k=0;k<T;k++){
            clone[k] = S[k];
        }
        while (P[j] > 0 && i<T){
            P[j] -= i;
            clone[i]--;
            R[j]++;
            if (clone[i] == 0){
                i++;
            }
            if (P[j] < 0){
                R[j]--;
            }
        }
    }
    return R;
}
