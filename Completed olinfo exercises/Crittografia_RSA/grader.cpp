#include <bits/stdc++.h>
using namespace std;
// Declaring variables
int N;
int d;
int L;
vector<int> messaggio;
vector<char> plaintext;

// Declaring functions
void decifra(int N, int d, int L, vector<int> messaggio, vector<char>& plaintext);

int main() {
    cin >> N >> d >> L;
    messaggio.resize(L);
    plaintext.resize(L);
	for (int i = 0; i < L; i++) cin >> messaggio[i];
	decifra(N, d, L, messaggio, plaintext);
	for (char c : plaintext) cout << c;
	return 0;
}

void decifra(int N, int d, int L, vector<int> messaggio, vector<char>& plaintext) {
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
