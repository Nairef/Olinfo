#include <bits/stdc++.h>

using namespace std;

int main(){
    int64_t n, i;
    cin >> n;
    int64_t max_sum = n * (n + 1) / 2;
    int64_t total_sum = 0;
    for (i = 0; i < n - 1; i++) {
        int64_t val;
        cin >> val;
        total_sum += val;
    }
    cout << max_sum - total_sum << endl;
}