#include <bits/stdc++.h>

using namespace std;

int main(){
    int N, i, count = 0;
    cin >> N;
    int total = N;
    vector<string> S(N);
    for (i=0;i<N;i++){
        cin >> S[i];
    }
    map<string, int64_t> m;
    for (i = 0; i < N; ++i){
        m[S[i]]++;
        if (m[S[i]] >= 2){
            count++;
        }
    }
    while (count > 1){
        total--;
        count--;
    }
    cout << total << endl;
}