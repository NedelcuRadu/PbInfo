#include <bits/stdc++.h>
using namespace std;

ifstream in("BFS.in");
ofstream out("BFS.out");

bool A[100][100];
int N, M, Root;
int cost[100];
int S[100];
void BFS(int nod) {
    out<<nod<<" ";
    for(int i = 1; i <= N; i++)
        cost[i] = -1;
    int st = 1, dr = 1;
    S[1] = nod;
    cost[nod] = 0;

    while(st <= dr) {
        int k = S[st];
        for(int i = 1; i <= N; i++)
            if(cost[i] == -1 && A[i][k] == 1) {
            out<<i<<" ";
                cost[i] = cost[k] + 1;
                S[++dr] = i;

            }
        st++;
    }



}

void BFS2(int nod) {
    out << nod << " ";
    int L = 1;
    for(int i = 1; i <= N; i++)
        cost[i] = -1;
    cost[nod] = 0;
    S[L] = nod;
    for(int i = 1; i <= L; i++)
        for(int j = 1; j <= N; j++)
            if(A[S[i]][j] && cost[j] == -1) {
                out << j << " ";
                cost[j] = cost[S[i]] + 1;
                S[++L] = j;
            }
}
int main() {
    int x, y;

    in >> N >> M >> Root;
    for(int i = 1; i <= M; i++) {
        in >> x >> y;
        A[x][y] = 1;
        A[y][x] = 1;
    }

    BFS(Root);

    return 0;
}
