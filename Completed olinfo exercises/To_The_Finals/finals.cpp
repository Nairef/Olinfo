// NOTE: it is recommended to use this even if you don't understand the following code.

#include <fstream>
#include <iostream>
#include <vector>
#include <array>

using namespace std;

int main() {
    // uncomment the following lines if you want to read/write from files
    // ifstream cin("input.txt");
    // ofstream cout("output.txt");

    int N, P;
    cin >> N >> P;

    vector<array<int, 3>> S(N);
    for (int i = 0; i < N; i++) {
        cin >> S[i][0] >> S[i][1] >> S[i][2];
    }

    // insert your code here
    // calcolo il punteggio sulla squadra di Davide
    int S0 = S[0][0] + S[0][1] + S[0][2];
    int SMaxAltreP = 0;
    int SMaxAltreD = 0;
    int risultato;
    SMaxAltreP = S[1][0] + S[1][1] + S[1][2];
    for (int i = 1; i < N; i++) {
        SMaxAltreD = S[i][0] + S[i][1] + S[i][2];
        if(SMaxAltreD > SMaxAltreP)
            SMaxAltreP = SMaxAltreD;
    }
    SMaxAltreP += P*100;
    if(S0 > SMaxAltreP){
        risultato = 0;
        cout << risultato << endl;
    }
    else {
        risultato = SMaxAltreP - S0 + 1;
        cout << risultato << endl;
    }
    return 0;
}