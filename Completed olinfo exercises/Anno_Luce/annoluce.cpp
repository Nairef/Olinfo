#include <bits/stdc++.h>
using namespace std;
void mappatura(int N, int X[], int Y[], int Z[], double position[]) {
    // Mettete qui il codice della soluzione
    for (int i = 0; i < N; i++) {
        position[i] = sqrtl(powl(X[i], 2)+powl(Y[i], 2)+powl(Z[i], 2));
    }
    sort(position, position+N);
}

int query(int D, int N, double position[]) {
    // Mettete qui il codice della soluzione
    int R;
    int low = 0, high = N-1, mid=0;
    while (low <= high) {
        mid = (high + low) / 2;
        if (position[mid] <= D) {
            R = mid + 1;
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return R;
}


#define MAXN 100000
int X[MAXN], Y[MAXN], Z[MAXN];

int main() {
    FILE *fr, *fw;
    int N, Q, i;
    double position[MAXN];

    fr = fopen("input.txt", "r");
    fw = fopen("output.txt", "w");
    assert(1 == fscanf(fr, "%d", &N));
    for(i=0; i<N; i++)
        assert(3 == fscanf(fr, "%d%d%d", &X[i], &Y[i], &Z[i]));
    mappatura(N, X, Y, Z, position);

    assert(1 == fscanf(fr, "%d", &Q));
    for(i=0; i<Q; i++) {
        int D;
        assert(1 == fscanf(fr, "%d", &D));
        fprintf(fw, "%d\n", query(D, N, position));
    }

    fclose(fr);
    fclose(fw);
    return 0;
}
