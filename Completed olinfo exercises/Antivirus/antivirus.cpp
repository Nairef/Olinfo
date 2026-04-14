// NOTA: si raccomanda di usare questo template anche se non lo si capisce completamente.

#include <fstream>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
    // decommenta le due righe seguenti se vuoi leggere/scrivere da file
    freopen ("input.txt", "r", stdin);
    freopen ("output.txt", "w", stdout);

    int T;
    cin >> T;
    for (int test = 1; test <= T; ++test){
        int N1, N2, N3, N4;
        cin >> N1 >> N2 >> N3 >> N4;
        int M;
        cin >> M;
        string F1;
        cin >> F1;
        string F2;
        cin >> F2;
        string F3;
        cin >> F3;
        string F4;
        cin >> F4;
        int F1_virus;
        int F2_virus;
        int F3_virus;
        int F4_virus;
        for (int i = 0; i < (int)F1.length(); i++){
            F1_virus = i;
            F2_virus = -1;
            F3_virus = -1;
            F4_virus = -1;
            string virus_candidato = F1.substr(i, M);
            for (int j = 0; j < (int)F2.length(); j++)
            {
                if (F2.substr(j, M) == virus_candidato)
                {
                    F2_virus = j;
                    break;
                }
            }
            for (int j = 0; j < (int)F3.length(); j++)
            {
                if (F3.substr(j, M) == virus_candidato)
                {
                    F3_virus = j;
                    break;
                }
            }
            for (int j = 0; j < (int)F4.length(); j++)
            {
                if (F4.substr(j, M) == virus_candidato)
                {
                    F4_virus = j;
                    break;
                }
            }
            if (F2_virus != -1 and F3_virus != -1 and F4_virus != -1) break;
        }
        cout << "Case #" << test << ": ";
        cout << F1_virus << " " << F2_virus << " " << F3_virus << " " << F4_virus << endl;
    }
    return 0;
}