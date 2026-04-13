#include <bits/stdc++.h>
using namespace std;

void riprogramma(int N, int K, vector<int>& C){
    for (int i = 0; i < N; i++){
        if (i>0&&C[i]==C[i-1]){
            for (int j=1;j<=K;j++){
                if (j!=C[i]){
                    C[i]=j;
                    i=0;
                    break;
                }
            }
        }
    }
}