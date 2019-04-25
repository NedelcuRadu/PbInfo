#include <bits/stdc++.h>
#define MAX 102
using namespace std;

ifstream in("detdrum1.in");
ofstream out("detdrum1.out");

int A[MAX];
int N, root, K;
void citire() {
    in >> N >> K;
    for(int i = 1; i <= N; i++) {
        in >> A[i];
        if(A[i] == 0)
            root = i;
    }
}

void drum(int nod) {
    if(A[nod] != 0)
        drum(A[nod]);
    out << nod << " ";
}

int main() {
    citire();
    drum(K);
    return 0;
}
