#include <bits/stdc++.h>
#define MAX 100010
using namespace std;
ifstream in("topsort.in");
ofstream out("topsort.out");
bool viz[MAX];
int N, M;
vector<int>A[MAX];
vector<int> B;
void citire() {
    int x, y;
    in >> N >> M;
    while(in >> x >> y)
        A[x].push_back(y);
}

void afis(vector<int> B) {
    for(int i = 0; i < B.size(); i++)
        cout << B[i] << " ";
    cout << endl;
}

void DFS(int nod) {
    viz[nod] = 1;
    for(int i = 0; i < A[nod].size(); i++)
        if(!viz[A[nod][i]])
            DFS(A[nod][i]);
    B.push_back(nod);

}

int main() {

    citire();
    for(int i = 1; i <= N; i++)
        if(!viz[i])
            DFS(i);
    for(int i = B.size() - 1; i >= 0; i--)
        cout << B[i] << " ";
    return 0;
}
