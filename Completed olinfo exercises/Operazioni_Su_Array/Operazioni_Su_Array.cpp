#include <bits/stdc++.h>
using namespace std;
int main(){
    int N, i; 
    double mean;
    int64_t sum=0;
    cin >> N;
    vector<int> values(N);
    for (i=0;i<N;i++){
        cin >> values[i];
        sum += values[i];
    }
    mean = (double)sum/N;
    cout << sum << " " << mean << endl;
}