// NOTE: it is recommended to use this even if you don't understand the following code.

#include <bits/stdc++.h>

using namespace std;

int main() {
    // uncomment the two following lines if you want to read/write from files
    // ifstream cin('input.txt');
    // ofstream cout('output.txt');

    string S;
    cin >> S;

    string T="";

    int j=0, n, i=0;
    // INSERT YOUR CODE HERE
    // 'alpha', 'bravo', 'charlie', 'delta', 'echo', 'foxtrot', 'golf', 'hotel', 'india', 'juliett', 'kilo', 'lima', 'mike', 'november', 'oscar', 'papa', 'quebec', 'romeo', 'sierra', 'tango', 'uniform', 'victor', 'whiskey', 'xray', 'yankee', 'zulu'

    n = S.length();
    while (i<n){
        if (S[i] == 'a' || S[i] == 'b'|| S[i] == 'd'|| S[i] == 'h'|| S[i] == 'i'|| S[i] == 'o'|| S[i] == 'r'|| S[i] == 't'){
            T.insert(T.end(), S[i]);
            j++;
            i+=5;
        } else if (S[i] == 'e' || S[i] == 'g'|| S[i] == 'k'|| S[i] == 'l'|| S[i] == 'm'|| S[i] == 'p'|| S[i] == 'x'|| S[i] == 'z'){
            T.insert(T.end(), S[i]);
            j++;
            i+=4;
        } else if (S[i] == 'c' || S[i] == 'f'|| S[i] == 'j'|| S[i] == 'u'|| S[i] == 'w'){
            T.insert(T.end(), S[i]);
            j++;
            i+=7;
        } else if (S[i] == 'q' || S[i] == 's'|| S[i] == 'v'|| S[i] == 'y'){
            T.insert(T.end(), S[i]);
            j++;
            i+=6;
        } else {
            T.insert(T.end(), S[i]);
            j++;
            i+=8;
        }
    }

    cout << T << endl;

    return 0;
}
