// NOTE: it is recommended to use this even if you don't understand the following code.

#include <bits/stdc++.h>

using namespace std;

// input data
int64_t N;
int64_t D;

int main() {
//  uncomment the following lines if you want to read/write from files
//  ifstream cin("input.txt");
//  ofstream cout("output.txt");

    cin >> N >> D;

    // insert your code here
    int64_t ans1=0, ans2=0;
  
    ans1 = ceil(powl(10, N-1)/D) * D;
    ans2 = ans1 + D;

    if(ans2 >= powl(10, N)){
        ans1 = 0;
        ans2 = 0;
    }

    cout << ans1 << ' ' << ans2 << '\n'; // print the result
}