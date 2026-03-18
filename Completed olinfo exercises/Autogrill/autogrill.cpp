#include <bits/stdc++.h>
using namespace std;
multiset<long long> status;

void inizia() {
    return;
}

void apri(long long p) {
    status.insert(p);
}

void chiudi(long long p) {
    auto it = status.find(p);
    if (it != status.end()) {
        status.erase(it);
    }
}

long long chiedi(long long p) {
    if (status.empty()) return -1;
    auto it_right = status.lower_bound(p);
    if (it_right == status.end()) return *status.rbegin();
    if (it_right == status.begin()) return *it_right;
    auto it_left = prev(it_right);
    long long val_left = *it_left;
    long long val_right = *it_right;
    long long dist_left = abs(p - val_left);
    long long dist_right = abs(p - val_right);
    if (dist_right <= dist_left) {
        return val_right;
    } else {
        return val_left;
    }
}