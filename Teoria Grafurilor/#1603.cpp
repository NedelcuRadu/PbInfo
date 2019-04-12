#include <bits/stdc++.h>
using namespace std;
ifstream in("componenteconexe3.in");
ofstream out("componenteconexe3.out");

bool viz[101];
vector<int> A[101];
vector<int> C;
int N;

void citire() {
    int x, y;
    in >> N;
    while(in >> x >> y) {
        A[x].push_back(y);
        A[y].push_back(x);
    }
}
void DFS(int nod) {
    viz[nod] = 1;
    for(int i = 0; i < A[nod].size(); i++)
        if(!viz[A[nod][i]])
            DFS(A[nod][i]);
    C.push_back(nod); //Retinem nodurile din componenta conexa
}

int main() {
    int cnt = 0;
    int max = 0;
    int repr = 0;
    citire();
    for(int i = 1; i <= N; i++) 
        if(!viz[i]) {

            DFS(i);
            if(C.size() > max) { //Daca componenta conexa are mai multe noduri decat maximul
                max = C.size();
                repr = i; //Nodurile sunt parcurse in ordine crescatoare deci reprezentantul este i
            }
            C.clear();
        }
    out << repr << " " << max;
    return 0;
}
