#include <bits/stdc++.h>
#define MAX 50010
using namespace std;
ifstream in("protest.in");
ofstream out("protest.out");

bool viz[MAX];
int N, M;
vector<int>A[MAX];
vector<int> B;

void citire() {
    int x, y;
    in >> N >> M;
    for(int i = 1; i <= M; i++) {
        in >> x;
        viz[x] = 1;
    }
    while(in >> x >> y)
        A[x].push_back(y);
}

void DFS(int nod) {
    viz[nod] = 1;
    B.push_back(nod);
    for(int i = 0; i < A[nod].size(); i++)
        if(!viz[A[nod][i]])
            DFS(A[nod][i]);
}

int main() {
    citire();
    DFS(1);
    out << B.size() - 1;
    return 0;
}
