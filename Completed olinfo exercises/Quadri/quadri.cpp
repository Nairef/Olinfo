#include <bits/stdc++.h>
using namespace std;
bool check(int len, int N, long long M, int* V) {
    if (len == 0) return true;
    long long current_sum = 0;
    for (int i = 0; i < len; i++) current_sum += V[i];
    if (current_sum > M) return false;
    for (int i = len; i < N; i++) {
        current_sum += V[i] - V[i - len];
        if (current_sum > M) return false;
    }
    return true;
}
int quadri(int N, long long M, int* V){
	int low = 0, high = N, ans = 0;
	while (low <= high) {
    	int mid = low + (high - low) / 2;
    	if (check(mid, N, M, V)) {
        	ans = mid;
        	low = mid + 1;
    	} else {
        	high = mid - 1;
    	}
	}
	return ans;
}
