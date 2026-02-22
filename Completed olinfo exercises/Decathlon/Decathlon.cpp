#include <iostream>
using namespace std;

int salta(int X, int Y){
    int R;
    if (Y<X){
        R=X-Y+500;
    } else {
        R=0;
    }
    return R;
}

// NON TOCCARE SOTTO QUESTA LINEA

#ifndef EVAL
int main() {
    int X, Y; cin >> X >> Y;
    cout << salta(X, Y) << '\n';
}
#endif
