// NOTE: it is recommended to use this even if you don't understand the following code.

#include <bits/stdc++.h>

using namespace std;

int main() {
    // uncomment the two following lines if you want to read/write from files
    // ifstream cin("input.txt");
    // ofstream cout("output.txt");
    int N, tot = 0;
    cin >> N;
    string S;
    cin >> S;
    int K = 0;
    // INSERT YOUR CODE HERE
    vector<int> pos(N, -1);
    int loc = 0;
    for (int i = 0; i < N; i++){
        if (S[i] == 'D') tot += 9;
        else if (S[i] == 'B') tot += 10;
        else if (S[i] == 'H') {
            if (i==0){
                tot+=10;
                K++;
                continue;
            }
            loc++;
        }
        else if (S[i] == 'U'){
            if (i == 0){
                K = -1;
                break;
            }
            tot -= 11;
            while (tot <= 0){
                if (loc > 0){
                    tot+=10;
                    loc--;
                    K++;
                } else {
                    K = -1;
                    break;
                }
            }
            if (K == -1) break;
        }
    }
    cout << K << endl;

    return 0;
}
