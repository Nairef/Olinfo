#include <bits/stdc++.h>

using namespace std;

int compra(int N, int M, int A, int B){
    int R=0;
    if (A * M <= B) {
        return N * A;
    }
    R = (N / M) * B;
    int leftovers = N % M;
    R += min(leftovers * A, B);
    return R;
}

int main() {
    FILE *fr, *fw;
    int N, M, A, B;

    fr = fopen("input.txt", "r");
    fw = fopen("output.txt", "w");

    assert(4 == fscanf(fr, "%d%d%d%d", &N, &M, &A, &B));

    fprintf(fw, "%d\n", compra(N, M, A, B));
    fclose(fr);
    fclose(fw);
    return 0;
}
