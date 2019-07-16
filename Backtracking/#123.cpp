#include <iostream>
#include <fstream>
using namespace std;
ifstream in("permutari.in");
ofstream out("permutari.out");

int st[1000];

bool ok(int k) {
    for(int i = 1; i < k; i++)
        if(st[i] == st[k])
            return 0;
    return 1;
}
void afis(int k) {
    for(int i = 1; i <= k; i++)
        out << st[i] << " ";
    out << endl;
}

void backtrack(int k, int N) {
    for(int i = 1; i <= N; i++) {
        st[k] = i;
        if(ok(k))
            if(k == N)
                afis(k);
            else
                backtrack(k + 1, N);
    }
}

int main() {
    int N;
    in >> N;
    backtrack(1, N);
    return 0;
}
