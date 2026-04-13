#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

void riprogramma(int N, int K, vector<int>& C){
    for (int i = 0; i < N; i++){
        if (i>0&&C[i]==C[i-1]){
            for (int j=1;j<=K;j++){
                if (j!=C[i]){
                    C[i]=j;
                    i=0;
                    break;
                }
            }
        }
    }
}
int main() {
  // se preferisci leggere e scrivere da file
  // ti basta decommentare le seguenti due righe:

  // ifstream cin("input.txt");
  // ofstream cout("output.txt");

  int N, K;
  cin >> N >> K;

  vector<int> C(N);
  for (int i = 0; i < N; i++) {
    cin >> C[i];
  }

  riprogramma(N, K, C);

  for (int i = 0; i < N; i++) {
    cout << C[i] << " ";
  }
  cout << endl;

  return 0;
}
