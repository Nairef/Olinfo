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

    int lo, hi, pos;
    cin >> lo >> hi >> pos;

    string pressedButtons;
    cin >> pressedButtons;

    string ans = "";


    // INSERT YOUR CODE HERE
    for (int i=0;i<pressedButtons.length();i++){
        if (pressedButtons[i] == 'U'){
            pos++;
        } else if (pressedButtons[i] == '0'){
            pos = 0; 
        } else {
            pos--;
        }
        if (pos < lo || pos > hi){
            ans = "error";
            break; 
        } else {
            ans = to_string(pos);
        }
    }

    cout << ans << '\n';

    return 0;
}
