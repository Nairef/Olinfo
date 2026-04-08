// NOTE: it is recommended to use this even if you don't understand the following code.

#include <bits/stdc++.h>

using namespace std;

int main() {
    // uncomment the two following lines if you want to read/write from files
    // ifstream cin("input.txt");
    // ofstream cout("output.txt");

    int A;
    cin >> A;

    int B;
    cin >> B;

    int C;
    cin >> C;
    // INSERT YOUR CODE HERE
    int ans = 1;
    if (C != A) ans+=2;
    if (B != A) ans+=2;
    if (B != C && C != A && B != A) ans++;
    cout << ans << endl;
    return 0;
}
