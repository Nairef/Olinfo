#include <bits/stdc++.h>

using namespace std;

int main(){
    int64_t n, i, r=0;
    cin >> n;
    vector<int64_t> x(n);
    for (i=0;i<n;i++){
        cin >> x[i];
    }
    for (i=1;i<n;i++){
        if (x[i] < x[i-1]){
            r+=x[i-1]-x[i];
            x[i]=x[i-1];
        }
    }
    cout << r << endl;
}