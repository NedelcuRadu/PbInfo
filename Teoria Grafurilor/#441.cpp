#include <bits/stdc++.h>
using namespace std;
ifstream in("componenteconexe1.in");
ofstream out("componenteconexe1.out");
bool viz[101];
vector<int> A[101];
bool B[101];
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
}

int main() {
    int cnt = 0;
    citire();
    for(int i = 1; i <= N; i++)
        if(!viz[i]) {
            cnt++;
            DFS(i);
        } else
            B[i] = 1;
    out << cnt - 1 << endl; //Pt a unii cnt componente conexe ne trebuie cnt-1 muchii.
    int i = 1;
    while(B[i]) 
        i++;
    for(int j = i + 1; j <= N; j++) //E suficient sa alegem un nod drept "pivot" si sa-l legam cu noduri din celelalte componente conexe
        if(!B[j])
            out << i << " " << j << endl;
    return 0;
}
