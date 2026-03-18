#include <bits/stdc++.h>

using namespace std;

void inizia();
void apri(long long p, vector<int>& status);
void chiudi(long long p, vector<int>& status);
long long chiedi(long long p, vector<int>& status);


int main() {
    int Q;
    cin >> Q;
    vector<int> status;
    inizia();

    for (int q = 0; q < Q; q++){
        long long p;
        char t;
        cin >> t >> p;
        if (t == 'a') apri(p, status);
        else if (t == 'c') chiudi(p, status);
        else cout << chiedi(p, status) << endl;
    }
    return 0;
}

void inizia() {
    return;
}

void apri(long long p, vector<int>& status) {
    status.push_back(p);
}

void chiudi(long long p, vector<int>& status){
    status.erase(remove(status.begin(), status.end(), p), status.end());
    return;
}

long long chiedi(long long p, vector<int>& status) {
    if (status.empty()) return -1;

    long long best_val = status[0];
    long long min_dist = abs(p - (long long)status[0]);

    for (int a : status) {
        long long current_dist = abs(p - (long long)a);
        if (current_dist < min_dist) {
            min_dist = current_dist;
            best_val = a;
        } else if (current_dist == min_dist) {
            if (a > best_val) {
                best_val = a;
            }
        }
    }
    return best_val;
}