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

    int A;
    cin >> A;

    int B;
    cin >> B;

    int T=0;


    // INSERT YOUR CODE HERE
    do {
        if (A == B && A > 1) {
            A = A - 2;
            B = B - 2;
            T++;
        } else if (A < B && A > 0 && B > 2) {
            A = A - 1;
            B = B - 3;
            T++;
        } else if (B < A && B > 0 && A > 2){
            A = A - 3;
            B = B - 1;
            T++;
        } else {
            break;
        }
    } while (A > 0 && B > 0);

    cout << T << endl;

    return 0;
}