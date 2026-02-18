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

    int N;
    cin >> N;

    vector<int> F(N);
    vector<char> T(N);
    for (int i = 0; i < N; ++i)
        cin >> F[i] >> T[i];

    int K = 0;


    // INSERT YOUR CODE HERE
    int tm = 0;
    int tb = 0;
    for (int i=0;i<N;++i){
        if (tm >= 50) {
        K++;
        tm = tm - 50;
        } else if (tb >= 80) {
        K++;
        tb = tb - 80;
        }
        if (T[i] == 'M') {
            tm = tm + F[i];
        } else {
            tb = tb + F[i];
        }
    }

    cout << K << endl;

    return 0;
}