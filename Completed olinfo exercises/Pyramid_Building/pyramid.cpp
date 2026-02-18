// NOTE: it is recommended to use this even if you don't understand the following code.

#include <bits/stdc++.h>

using namespace std;

int main() {
    // uncomment the two following lines if you want to read/write from files
    // ifstream cin("input.txt");
    // ofstream cout("output.txt");
    int N;
    cin >> N;
    int L = 0;
    // INSERT YOUR CODE HERE
    for (int i=1;i<INT32_MAX;i++){
        N-=powl(i, 2);
        L++;
        if (N < 0){
            L--;
            break;
        }
    }
    cout << L << endl;
    return 0;
}
