#include <bits/stdc++.h>

using namespace std;

int main(){

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int N;
    cin >> N;
    vector<vector<int>> A(N, vector<int>(N, -1));
    vector<vector<int>> memo(N, vector<int>(N, -1));
    for (int i = 0; i < N; i++)
        for (int j = 0; j <= i; j++)
            cin >> A[i][j];
    auto f = [&](int i, int j, auto&& f) -> int
    {
        if (i == N)
            return 0;
        if (memo[i][j] != -1)
            return memo[i][j];
        return memo[i][j] = max(f(i+1, j, f), f(i+1, j+1, f)) + A[i][j];
    };
    int ans = f(0, 0, f);
    cout << ans << endl; // mi sta venendo l'aids
}