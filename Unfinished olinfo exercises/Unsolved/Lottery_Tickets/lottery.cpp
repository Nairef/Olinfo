// NOTE: it is recommended to use this even if you don't understand the following code.

#include <bits/stdc++.h>

using namespace std;

int main() {
    // uncomment the following lines if you want to read/write from files
    // ifstream cin("input.txt");
    // ofstream cout("output.txt");
    int T;
    cin >> T;
    for (int t = 0; t < T; t++) {
        int N;
        cin >> N;
        string S;
        cin >> S;

        int somma = 0;
        bool cifre_uguali = false;

        while( somma != N || cifre_uguali == true ){
            for(int i=0; i<S.length(); i++){
                    somma += (int)S[i];
            }

            for(int i=1; i<S.length(); i++){
                int cifre_di_fila = 1;

                if(S[i] == S[i-1]){
                    cifre_di_fila++;
                }
                else{
                    cifre_di_fila = 1;
                }

                if(cifre_di_fila == 3){
                    cifre_uguali = true;
                }else{
                    cifre_uguali = false;
                }

            }

            if(somma == N && cifre_uguali== false){
                break;
            }

            S = stoi(S);
            S = S+1;
            S = to_string(S);

        }


        cout << somma << endl;  // print the result
    }
    return 0;
}
