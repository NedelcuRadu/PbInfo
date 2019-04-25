#include <iostream>
#include <fstream>
using namespace std;

ifstream in("nivele.in");
ofstream out("nivele.out");

int N, K;
int A[101];
int root;
int viz[101];

void citire() {
    in >> N>>K;
    for(int i = 1; i <= N; i++) {
        in >> A[i];
        if(A[i] == 0)
            root = i;
    }
}

void DFS(int nod, int nivel) {
    viz[nod] = nivel;
    for(int i = 1; i <= N; i++)
        if(A[i] == nod && viz[i] == 0)
            DFS(i, nivel + 1);
}

int main() {
    citire();
    DFS(root, 1);
    for(int i=1;i<=N;i++)
        if(viz[i]==K)
        cout<<i<<" ";
    return 0;
}
