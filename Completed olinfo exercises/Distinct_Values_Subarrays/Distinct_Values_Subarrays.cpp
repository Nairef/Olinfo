#include <bits/stdc++.h>

using namespace std;

int main(){
    int64_t n, total=0, left=0;
    cin >> n;
    vector<int64_t> x(n);
    map<int64_t, int64_t> window_values;
    for (int i=0;i<n;++i)
        cin >> x[i];
    for (int64_t right=0;right<n;right++){
        window_values[x[right]]++;
        while (window_values[x[right]] > 1){
            window_values[x[left]]--;
            left++;
        }
        total += right - left + 1;
    }
    cout << total << endl;
}
