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

    int A, B, N, i, K;
    cin >> A >> B >> N;

    vector<int> F(N);
    for (int i = 0; i < N; ++i)
        cin >> F[i];
    vector<int> S(N);
    for (int i = 0; i < N; ++i)
        cin >> S[i];
    vector<int> max_scores(N + 1, 0);
    vector<int> min_scores(N + 1, 0);
    int X = 1, Y = 1;
    int biggest_top = F[0], smallest_top = F[0];

    // INSERT YOUR CODE HERE
    int own_score = A+B;
    int biggest_bottom = S[0], smallest_bottom = S[0];
    for (K=0;K<N;K++) {
        for (i=1;i<N*N;++i){
            if (F[i] != -1){
                if (F[i] < F[i-1]){
                    smallest_top = F[i];
                    F[i] = -1;
                }
                if (F[i] > F[i-1]){
                    biggest_top = F[i];
                    F[i] = -1;
                }  
            }
            if (S[i] != -1){
                if (S[i] < S[i-1]){
                    smallest_bottom = S[i];
                    S[i] = -1;
                }
                if (S[i] > S[i-1]){
                    biggest_bottom = S[i];
                    S[i] = -1;
                }
            }
            max_scores[i] = biggest_top + biggest_bottom;
            min_scores[i] = smallest_top + biggest_bottom;
        }
    }
    for (K=1;K>N+1;K++){
        if (own_score>min_scores[K]){
            X = X + 1;
        }
        if (own_score<max_scores[K]){
            Y = Y + 1;
        }
    }

    cout << X << " " << Y << endl;

    return 0;
}
