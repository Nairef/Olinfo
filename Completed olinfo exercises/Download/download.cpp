// NOTA: si raccomanda di usare questo template anche se non lo si capisce completamente.

#include <fstream>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    // decommenta le due righe seguenti se vuoi leggere/scrivere da file
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int T;
    cin >> T;
    for (int test = 1; test <= T; ++test) {
        int N, F, C;
        cin >> N >> F >> C;

        int nf = 0, nc = 0;
        // INSERISCI IL TUO CODICE QUI
        for (int i=0;i<INT32_MAX;i++){
            if (N - F >= 0){
                N-=F;
                nf++;
            } else if (N - C >= 0){
                N-=C;
                nc++;
            } else {
                break;
            }
        }    
        cout << "Case #" << test << ": ";
        cout << nf << " " << nc << endl;
    }
    return 0;
}
