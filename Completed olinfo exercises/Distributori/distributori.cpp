#include <bits/stdc++.h>
using namespace std;
#define MAXN 100000

int rifornisci(int N, int M, int K, int D[]) {
    int stops = 0;
    int current_fuel = M;
    int current_pos = 0;
    for (int i = 0; i < N; i++) {
        int dist_to_next = D[i] - current_pos;
        if (dist_to_next > M) return -1;
        if (current_fuel < dist_to_next) {
            stops++;
            current_fuel = M; 
        }
        current_fuel -= dist_to_next;
        current_pos = D[i];
    }
    int final_dist = K - current_pos;
    if (final_dist > M) return -1;
    if (current_fuel < final_dist) stops++;
    return stops;
}


int D[MAXN];

int main() {
    FILE *fr, *fw;
    int N, M, K, i;

    fr = fopen("input.txt", "r");
    fw = fopen("output.txt", "w");
    assert(3 == fscanf(fr, "%d %d %d", &N, &M, &K));
    for(i=0; i<N; i++)
        assert(1 == fscanf(fr, "%d", &D[i]));

    fprintf(fw, "%d\n", rifornisci(N, M, K, D));
    fclose(fr);
    fclose(fw);
    return 0;
}
