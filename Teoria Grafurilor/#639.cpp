#include <iostream>
#include <fstream>
using namespace std;

ifstream in("inaltime.in");
ofstream out("inaltime.out");

int N, K;
int A[101];
int root;
int maxi = 0;
int viz[101];

void citire() {
    in >> N;
    for(int i = 1; i <= N; i++) {
        in >> A[i];
        if(A[i] == 0)
            root = i;
    }
}
void DFS(int nod, int nivel) {
    viz[nod] = nivel;
    if(maxi < nivel)
        maxi = nivel;
    for(int i = 1; i <= N; i++)
        if(A[i] == nod && viz[i] == 0)
            DFS(i, nivel + 1);

}
int main() {
    citire();
    int x;
    DFS(root, 1);
    out << maxi;
    return 0;
}
