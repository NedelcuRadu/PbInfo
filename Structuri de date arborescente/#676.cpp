#include <bits/stdc++.h>
#define MAX 1000100
#define sqrtMAX 1000
using namespace std;

ifstream in("countprimsub.in");
ofstream out("countprimsub.out");

typedef struct nod {
    int key;
    nod *st, *dr;
}*pNod;

pNod v[1010];
vector<int> A;
int N, K;
bool prim[MAX];

void add(pNod dest, int akey, pNod ast, pNod adr) {
    dest->st = ast;
    dest->dr = adr;
    dest->key = akey;
}

void citire() {
    int x, y, z;
    in >> N;
    for(int i = 1; i <= N; i++) {
        v[i] = new nod;
    }
    for(int i = 1; i <= N; i++) {
        in >> x >> y >> z;
        add(v[i], x, v[y], v[z]);
    }

}

void inordine(pNod root) {
    if(root->st != NULL)
        inordine(root->st);
    if(prim[root->key])
        A.push_back(root->key);

    if(root->dr != NULL)
        inordine(root->dr);

}

void ciur() {
    memset(prim, 1, sizeof(prim));
    prim[1] = 0;
    for(int i = 2; i < sqrtMAX; i++)
        if(prim[i])
            for(int j = i * i; j < MAX; j += i)
                prim[j] = 0;
}

int main() {

    int root;
    ciur();
    citire();
    in >> K;
    for(int i = 1; i <= K; i++) {
        in >> root;
        inordine(v[root]);
        out << A.size() << '\n';
        A.clear();
    }

    return 0;
}
