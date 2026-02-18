#include <bits/stdc++.h>

using namespace std;

int main() {
    // uncomment the following lines if you want to read/write from files
    // ifstream cin("input.txt");
    // ofstream cout("output.txt");

    int N, Q;
    cin >> N >> Q;

    vector<int> C(N);
    for (int i = 0; i < N; i++) {
        cin >> C[i];
    }

    map<int, int> O;


    for (int i = 0; i < Q; i++) {
        int x;
        cin >> x;
        // insert your code here

        for( int j = 0; j<N; j++ ){
            if((C[j] == x) && j!=0){
                // devo aumentare il numero di sorpassi subiti da C[j-1]
                // devo aggiornare la classifica
                // O[i-1] = O[i-1] + 1;

                O[C[j-1]]++;


                int temp = C[j-1];
                C[j-1] = C[j];
                C[j] = temp;
                break;
            }
        }

        int current_max_index = 0;
        int current_max = INT_MIN;

        for (int j=0; j<N; j++){
            if(O[j]>current_max){
                current_max_index = j;
                current_max = O[j];
            }
        }

        cout << current_max_index << endl;  // print the result
    }
    return 0;
}