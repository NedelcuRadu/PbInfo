#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

ifstream in("countsub.in");
ofstream out("countsub.out");

typedef struct nod {
    int key;
    nod *st, *dr;
}*pNod;

pNod v[1010];
vector<int> A;
int N,K;

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

    A.push_back(root->key);

    if(root->dr != NULL)
        inordine(root->dr);

}


int main() {
    int root;

    citire();
    in>>K;
    for(int i=1;i<=K;i++)
    {
        in>>root;
        inordine(v[root]);
        out<<A.size()<<'\n';
        A.clear();
    }

    return 0;
}
