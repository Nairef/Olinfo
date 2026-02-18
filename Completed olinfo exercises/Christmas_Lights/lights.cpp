// NOTE: it is recommended to use this even if you don't understand the
// following code.

#include <bits/stdc++.h>

using namespace std;

int main() {
    // uncomment the following lines if you want to read/write from files
    // ifstream cin("input.txt");
    // ofstream cout("output.txt");

    int N, C;
    cin >> N >> C;
    vector<int> L(N);
    for (int i = 0; i < N; i++) 
        cin >> L[i];
    int MIN_LENGHT = INT_MAX;
    int left = 0;
    vector<int> window_colors(C, 0);
    int colore = 0;

    // insert your code here
    for (int right = 0; right < N; right++){
        window_colors[L[right]]++;
        if (window_colors[L[right]] == 1){
            colore++;
        }
        while (colore == C){
            MIN_LENGHT = min(MIN_LENGHT, right - left + 1);
            window_colors[L[left]]--;
            if (window_colors[L[left]] == 0){
                colore--;
            }
            left++;
        }
    }    
    cout << MIN_LENGHT << endl;  // print the result
    return 0;
}
