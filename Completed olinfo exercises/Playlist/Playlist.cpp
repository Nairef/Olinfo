#include <bits/stdc++.h>

using namespace std;

int main(){
    int64_t n, left=0, total=0;
    cin >> n;
    vector<int64_t> k(n);
    for (int i=0;i<n;++i)
        cin >> k[i];
    map<int64_t, int64_t> window_songs;
    for (int right=0;right<n;++right){
        window_songs[k[right]]++;
        while (window_songs[k[right]]>1){
            window_songs[k[left]]--;
            left++;
        }
        total = max(total, right - left + 1);
    }
    cout << total << endl;
}