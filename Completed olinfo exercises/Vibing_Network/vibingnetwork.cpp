// NOTE: it is recommended to use this even if you don't understand the following code.

#include <fstream>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    // uncomment the two following lines if you want to read/write from files
    ifstream cin("input.txt");
    ofstream cout("output.txt");

    long long N;
    int T, K;
    cin >> N >> T >> K;

    vector<long long> a(T);
    for (int i = 0; i < T; i++)
        cin >> a[i];

    int streak = 0;
    int answer = -1;

    // INSERT YOUR CODE HERE

    for(int i = 0; i < T; i++){
        if(a[i] * 100 >= 67 * N){
            streak++;
            if (streak == K) {
                answer = i - K + 2; 
                break;
            }
        } else {
            streak = 0;
        }
    }

    cout << answer << endl;
    
    return 0;
}