#include <bits/stdc++.h>
using namespace std;

ifstream in("arbore.in");
ofstream out("arbore.out");

typedef struct nod {
    int key;
    nod *urm;
}*pNod;

pNod v[1000];
int tati[1000];

void add(pNod &dest, int val) {
    pNod p = new nod;
    p->key = val;
    p->urm = dest;
    dest = p;
}

void DFS(int nod, int nivel) {
    tati[nod] = nivel;
    pNod p;
    for(p = v[nod]; p; p = p->urm)
        if(tati[p->key] == -1)
            DFS(p->key, nod);

}

int main() {
    int N, k, x, y;
    in >> N >> k;
    for(int i = 1; i <= N; i++) {
        in >> x >> y;
        add(v[y], x);
        add(v[x], y);
    }
    memset(tati, -1, sizeof(tati));
    DFS(k, 0);
    for(int i = 1; i <= N; i++)
        cout << tati[i] << " ";
}
