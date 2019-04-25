#include <iostream>
#include <fstream>
using namespace std;
ifstream in("subarbore.in");
ofstream out("subarbore.out");
int N, K, root;
int A[101], viz[101];

void citire() {
    in >> N >> K;
    for(int i = 1; i <= N; i++) {
        in >> A[i];
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
    DFS(K, 1);
    for(int i = 1; i <= N; i++)
        if(viz[i])
            out << i << " ";
    return 0;
}
