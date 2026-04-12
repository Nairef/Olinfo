#include <bits/stdc++.h>
using namespace std;
void decifra(int N, int d, int L, int* messaggio, char* plaintext) {
    for (int i = 0; i < L; i++) {
        long long res = 1;
        long long base = messaggio[i] % N;
        int exp = d;
        while (exp > 0) {
            if (exp % 2 == 1) res = (res * base) % N;
            base = (base * base) % N;
            exp /= 2;
        }
        plaintext[i] = (char)res;
    }
}