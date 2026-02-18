#include <bits/stdc++.h>

using namespace std;

int main(){
    int64_t i, R=-1, count=1;
    string n;
    cin >> n;
    for (i=1;i<n.length();i++){
        if (n[i] == n[i-1]){
            count++;
        } else {
            R=max(R, count);
            count = 1;
        }
    }
    R=max(R, count);
    cout << R;
}