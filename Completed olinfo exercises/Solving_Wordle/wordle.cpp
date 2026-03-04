// NOTE: it is recommended to use this even if you don't understand the following code.

#include <bits/stdc++.h>

using namespace std;

// input data
int N;
vector<char> L;

int main() {
//  uncomment the following lines if you want to read/write from files
//  ifstream cin("input.txt");
//  ofstream cout("output.txt");

    cin >> N;
    L.resize(N);
    for (int i=0; i<N; i++)
        cin >> L[i];

    // insert your code here
    int64_t result=1, underscore_counter=0, letter_counter=0, alphabet=26;
    for (int i = 0; i < L.size(); i++){
        if (L[i] == '_'){
            underscore_counter++;
        } else {
            letter_counter++;
        }
    }
    alphabet -= letter_counter;
    for (int i = 0; i < underscore_counter; i++){
      result = result * alphabet;
      alphabet--;
    }
    cout << result << endl; // print the result
    return 0;
}
