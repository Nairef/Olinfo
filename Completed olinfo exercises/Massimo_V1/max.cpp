#include <bits/stdc++.h>

using namespace std;

int main(){
    int N, i;
    cin >> N;
    vector<int> S (N);
    for (i = 0; i < N; ++i)
        cin >> S[i];
    int max = S[0];
    for (i = 0; i < N; ++i){
        if (max < S[i]){
            max = S[i];
        }
    }
    cout << max << "\n";
}