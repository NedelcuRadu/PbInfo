#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
using namespace std;
ifstream in("BFS.in");
ofstream out("BFS.out");
int N, M, Start;
bool viz[101] = {0};
vector<int> A[101];
int S[101];
void citire() {
    in >> N >> M >> Start;
    int x, y;
    for(int i = 1; i <= M; i++) {
        in >> x >> y;
        A[x].push_back(y);
        A[y].push_back(x);
    }

}
void afis(vector<int> A[]) {
    for(int i = 1; i <= N; i++) {
        for(int j = 0; j < A[i].size(); j++)
            cout << A[i][j] << " ";
        cout << endl;
    }
}
void BFS(int nod) {
    int L = 1;
    S[L] = nod;
    viz[nod] = 1;
    out << nod;
    for(int i = 1; i <= L; i++)
        for(int j = 0; j < A[S[i]].size(); j++)
            if(!viz[A[S[i]][j]]) {
                viz[A[S[i]][j]] = 1;
                out << A[S[i]][j] << " ";
                S[++L] = A[S[i]][j];
            }
}

int main() {
    citire();
    for(int i = 1; i <= N; i++)
        sort(A[i].begin(), A[i].end());
    BFS(Start);
    return 0;
}
