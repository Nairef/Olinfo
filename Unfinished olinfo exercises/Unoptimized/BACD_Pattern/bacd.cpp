// NOTE: it is recommended to use this even if you don't understand the following code.
// 30/100
#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include <math.h>

using namespace std;

int main() {
    // uncomment the two following lines if you want to read/write from files
    // ifstream cin("input.txt");
    // ofstream cout("output.txt");

    int N, i, A=0, B=0, C=0;
    cin >> N;

    vector<int> P(N);
    for (int i = 0; i < N; ++i)
        cin >> P[i];

    int K = 0;


    // INSERT YOUR CODE HERE
    for (i=0;i<N-3;i++){
        if (P[i] > 1){
            B=P[i];
        }
        if (B > 0){
            for (int j = i+1;j<N-2;j++){
                if (B > P[j]){
                    A = P[j];
                }
                if (A > 0){
                    for (int h = j+1;h<N-1;h++){
                        if (P[h] > B){
                            C = P[h];
                        }
                        if (C > 0){
                            for (int l=h+1;l<N;l++){
                                if (P[l]>C){
                                    K++;
                                }
                            }
                        }
                        C=0;
                    }
                }
                A=0;
            }
        }
        B=0;
    }
    
    K=K % (1000000007);
    cout << K << endl;

    return 0;
}
