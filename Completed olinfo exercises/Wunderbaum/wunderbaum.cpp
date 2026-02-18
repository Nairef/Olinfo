// NOTE: it is recommended to use this even if you don't understand the following code.

#include <fstream>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    // uncomment the two following lines if you want to read/write from files
    // ifstream cin("input.txt");
    // ofstream cout("output.txt");

    int L, N;
    cin >> L >> N;

    int ans = 0;


    // INSERT YOUR CODE HERE

    int i, j;
    ans = L;
    for (i=1;i<=N;i++){
        if(i % 3 == 0){
            ans += 3;
        } else if (i % 2 == 0) {
            ans += 2;
        } else {
            ans++;
        }
    }
    cout << ans << endl;

    return 0;
}