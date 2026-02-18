#include <bits/stdc++.h>

using namespace std;

int main(){
    int T, M, N, i; 
    cin >> T >> M;
    vector<long long> S;
    for (i=0;i<T;i++)
        cin >> S[i];
    vector<long long> P;
    for (i=0;i<M;i++)
        cin >> P[i];
    map<int64_t, int64_t> m;
    N=accumulate(S.begin(), S.end(), 0);
    vector<int64_t> Prefix_Sum (N, 0);
    Prefix_Sum[0] = -1;
    while (Prefix_Sum[0] == -1){
        if (S[i]>0){
            Prefix_Sum[0] = i;
            i++;
        }
    }
    for (i=1;i<N;i++){
        Prefix_Sum[i] = Prefix_Sum[i-1];
        m[i] = Prefix_Sum[i-1];
    }
    int low=0, high=N-1, mid=0;
    m[N-1]=Prefix_Sum[N-1];
    while(low <= high){
        mid = ( high + low ) /2;
        if (Prefix_Sum[mid] == )
    }
}