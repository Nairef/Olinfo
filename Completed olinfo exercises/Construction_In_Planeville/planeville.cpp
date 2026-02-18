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

    vector<int> V(N);
    for (int i = 0; i < N; ++i)
        cin >> V[i];

    int S = 0;


    // INSERT YOUR CODE HERE
    for (int i=0;i<N;i++){
        S += V[i]+2;
    }


    cout << S << endl;

    return 0;
}
