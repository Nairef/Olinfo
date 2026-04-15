// NOTE: it is recommended to use this even if you don't understand the following code.

#include <bits/stdc++.h>

using namespace std;

int main()
{
    // uncomment the two following lines if you want to read/write from files
    // ifstream cin("input.txt");
    // ofstream cout("output.txt");
    int A, B, N;
    cin >> A >> B >> N;
    vector<int> F(N);
    for (int i = 0; i < N; ++i)
        cin >> F[i];

    vector<int> S(N);
    for (int i = 0; i < N; ++i)
        cin >> S[i];

    int X = 1, Y = 1;
    // INSERT YOUR CODE HERE
    int j = 0, my_score = A + B;
    sort(F.begin(), F.end());
    sort(S.begin(), S.end());
    int64_t idx_min = 0;
    int64_t idx_max = N - 1;
    for (int i = N - 1; i >= 0; i--){
        if (my_score < F[i] or my_score < S[i]){
            idx_max--;
            X++;
        } else break;
    }
    while (idx_max >= 0){
        if (my_score < F[idx_max] + S[idx_min]){
            X++;
            idx_max--;
        } else {
            idx_max--;
            idx_min++;
        }
    }
    int64_t top_idx = 0;
    int64_t bottom_idx = N-1;
    for (int i = 0; i < N; i++){
        if (top_idx > N or bottom_idx < 0) break;
        if (S[bottom_idx] + F[top_idx] > my_score){
            Y++;
            bottom_idx--;
            top_idx++;
        } else top_idx++;
    }
    cout << X << " " << Y << endl;
}