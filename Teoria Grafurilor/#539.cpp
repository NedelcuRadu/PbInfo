#include <iostream>
#include <fstream>
using namespace std;
ifstream in("DFS.in");
ofstream out("DFS.out");
bool viz[104] = {0};
bool A[104][104];
int K = 0;
int N, M, Start;

void citire() { //Graf sub forma de matrice
    in >> N >> M >> Start;
    int x, y;
    while(in >> x >> y) {
        A[x][y] = A[y][x] = 1;
    }

}
void DFS(int nod) {
    viz[nod] = 1;
    cout << nod << " ";
    for(int j = 1; j <= N; j++)
        if(A[nod][j] && !viz[j]) //E vecin si nevizitat
            DFS(j);
}

int main() {
    citire();
    DFS(Start);

    return 0;
}
