// NOTE: it is recommended to use this even if you don't understand the following code.

#include <fstream>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    // uncomment the two following lines if you want to read/write from files
    // ifstream cin("input.txt");
    // ofstream cout("output.txt");

    int T;
    cin >> T;
    for (int test = 1; test <= T; ++test) {
        int N, i, A=0, B=0;
        cin >> N;

        vector<int> W(N);
        for (i = 0; i < N; ++i)
            cin >> W[i];
        int K = 0;

        // INSERT YOUR CODE HERE
        vector<int> results(N, 0);
        for (i = 0; i < N; ++i){
            for (int j=i;j<N;j++){
                if (W[j] == 1){
                    A++;
                } else if (W[j] == 2) {
                    B++;
                }
                if (A >= 4 && A-B < 3){
                    results[i]++;
                    A = 0;
                    B = 0;
                } else if (B >= 4 && B-A < 3){
                    results[i]++;
                    A = 0;
                    B = 0;
                }
            }
        }
        K = results[0];
        for (i = 1; i < N; i++){
            if (results[i] > results[i-1]){
                K = results[i];
            }
        }
        cout << K << endl;
    }

    return 0;
}
