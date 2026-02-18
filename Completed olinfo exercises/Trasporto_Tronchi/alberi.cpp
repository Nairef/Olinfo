#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

long long carica(int N, int K, vector<int> A) {
    int i;
    long long V, R=0;
    for (i=0;i<N;i++){
        if (A[i] < K){
            R=R+A[i];
        } else {
            if (N - i == 1){
                R=R+A[i];
            } else {
                V = N-i;
                R=A[N-1]+V*K+R;
                break;
            }
        }
    }
    return R;
}

// GRADER DI ESEMPIO, NON MODIFICARE

#ifndef EVAL

int main() {
    
    int N, K;
    cin >> N >> K;

    vector<int> A(N);
    for (int &a: A) cin >> a;

    cout << carica(N, K, A) << endl;

    return 0;
}

#endif
