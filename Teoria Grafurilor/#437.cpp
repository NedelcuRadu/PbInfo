#include <iostream>
#include <fstream>
using namespace std;
ifstream in("conex.in");
ofstream out("conex.out");

bool viz[104] = {0};
bool A[104][104];
int K = 0;
int N, M, Start;

void citire() {
    in >> N;
    int x, y;
    while(in >> x >> y) {
        A[x][y] = A[y][x] = 1;
    }

}
void DFS(int nod) {
    viz[nod] = 1;
    K++;
    for(int j = 1; j <= N; j++)
        if(A[nod][j] && !viz[j])
            DFS(j);
}

int main() {
    citire();
    DFS(1);
    if(K != N)
        out << "NU";
    else
        out << "DA";
    return 0;
}
