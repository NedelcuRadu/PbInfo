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
    in >> N;
    for(int i = 1; i <= N; i++) {
        in >> A[i];
        if(A[i] == 0) //Tinem minte radacina pt DFS
            root = i;
    }
    in >> K;
}

void DFS(int nod, int nivel) {
    viz[nod] = nivel; //Marcam nivelul
    for(int i = 1; i <= N; i++)
        if(A[i] == nod && viz[i] == 0) //Daca nodul e fiu si nu e vizitat
            DFS(i, nivel + 1);
}

int main() {
    citire();
    int x;
    DFS(root, 1);
    for(int i = 1; i <= K; i++) {
        in >> x;
        out << viz[x] << '\n';
    }

    return 0;
}
