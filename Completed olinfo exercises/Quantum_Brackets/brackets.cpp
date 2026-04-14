// NOTE: it is recommended to use this even if you don't understand the following code.
#include <bits/stdc++.h>
// constraints
#define MAXN 400000
using namespace std;
int main() {
    //  uncomment the following lines if you want to read/write from files
    //  freopen("input.txt", "r", stdin);
    //  freopen("output.txt", "w", stdout);
    int N, K, T, i, t, R;
    vector<int> P;
    assert(cin >> T);
    for(t = 0; t < T; t++) {
        assert(cin >> N >> K);
        P.resize(N);
        for(i = 0; i < N; i++) {
            assert(cin >> P[i]);
        }
        // write your code here
        stack<int> stk;
        for (i = 0; i < N; i++){
            if (!stk.empty() and stk.top() == P[i]){
                stk.pop();
                continue;
            }
            stk.push(P[i]);
        }
        if (stk.empty()){
            R = 1;
        } else R=0;
        cout << R << endl; // print the result
    }
    return 0;
}
