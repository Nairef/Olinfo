#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int trova_massimo(int N, vector<int> V){
    cin >> N;
    for(int i = 0; i < N; i++) {
        cin >> V[i];
    }
    int max_val = V[0];
    for (int i = 1; i < N; ++i) {
        if (V[i] > max_val) {
            max_val = V[i];
        }
    }
    return max_val;
}