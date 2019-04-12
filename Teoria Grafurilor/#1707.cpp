#include <bits/stdc++.h>
using namespace std;
ifstream in("retea.in");
ofstream out("retea.out");

int viz[101];
vector<int> A[101];
int N, M;

void citire() {
    int x, y;
    in >> N >> M;
    while(in >> x >> y) {
        A[x].push_back(y);
        A[y].push_back(x);
    }
}

void DFS(int nod) {
    viz[nod]++;
    for(int i = 0; i < A[nod].size(); i++)
        if(!viz[A[nod][i]])
            DFS(A[nod][i]);
}

int main() {
    int cnt = 0;
    citire();
    for(int j = 1; j <= N; j++) { //"Taiem" pe rand cate un server
        viz[j] = 1;
        cnt = 0;
        memset(viz, 0, sizeof(viz));
        for(int i = 1; i <= N; i++) //Numaram componentele conexe
            if(!viz[i]) {
                DFS(i);
                cnt++;
            }
        if(cnt != 1) //Daca nu e doar o componenta conexa 
            out << 1 << " ";
        else
            out << 0 << " ";
    }
    return 0;
}
