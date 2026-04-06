#include <bits/stdc++.h>
using namespace std;
static FILE *fr, *fw;

// Declaring variables
static int N;
static long long M;
static int* V;
static int B;

// Declaring functions
int quadri(int N, long long M, int* V){
	int ans = 0;
	vector<int> new_vector (N);
	for (int i = 0; i < N; i++) new_vector[i] = V[i];
	sort(new_vector.begin(), new_vector.end());
    long long tot = 0;
	for (int i = N-1; i >= 0; i--){
		ans++;
		tot += new_vector[i];
        if (tot > M){
            return --ans;
        }
	}
	return ans;
}

int main() {
	fr = stdin;
	fw = stdout;

	// Iterators used in for loops
	int i0;

	// Reading input
	fscanf(fr, "%d %lld", &N, &M);
	V = (int*)malloc(N * sizeof(int));
	for (i0 = 0; i0 < N; i0++) {
	    fscanf(fr, "%d", &V[i0]);
	}

	// Calling functions
	B = quadri(N, M, V);

	// Writing output
	fprintf(fw, "%d\n", B);

	fclose(fr);
	fclose(fw);
	return 0;
}
