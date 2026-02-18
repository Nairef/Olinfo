// NOTE: it is recommended to use this even if you don't understand the following code.

#include <bits/stdc++.h>

using namespace std;

int main() {
    // uncomment the two following lines if you want to read/write from files
    // ifstream cin("input.txt");
    // ofstream cout("output.txt");

    string S;
    cin >> S;
    
    int N;
    cin >> N;
    
    unordered_set<string> exnm;
    for (int i = 0; i < N; ++i) {
        string U;
        cin >> U;
        exnm.insert(U);
    }

    string T = S;
    int count = 1;
    while (exnm.count(T)) {
        T = S + to_string(count);
        count++;
    }
    
    cout << T << endl;

    return 0;
}
