#include <bits/stdc++.h>

using namespace std;

int main(){
    int N, D, i, mid; 
    int64_t most, danger = 0;
    cin >> N >> D;
    vector<int> P(N);
    for (i=0;i<N;++i)
        cin >> P[i];
    for (i=0;i<N;++i){
        int low = i+1;
        int high = N-1;
        most = i;
        while (low <= high){
            mid = (low + high)/2;
            if (P[mid]-P[i]>=D){
                high = mid - 1;
            } else {
                most = mid;
                low = mid + 1;
            }
        }
        danger += most - i;
    }
    cout << danger << endl;
}   