#include <iostream>
#include <fstream>
#include <vector>
#define MAX 1010
using namespace std;

ifstream in("inordine.in");
ofstream out("inordine.out");

typedef struct nod {
    int key;
    nod *st, *dr;
}*pNod;

pNod v[MAX];
int N;
vector<int> A;

void add(pNod &dest, int akey, pNod ast, pNod adr) {
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

void afis() {
    for(int i = 0; i < A.size(); i++)
        out << A[i] << " ";
}

int main() {
    citire();
    for(int i = 1; i <= N; i++) {
        inordine(v[i]);
        if(A.size() == N) {
            afis();
            return 0;
        } else
            A.clear();
    }
    return 0;
}
