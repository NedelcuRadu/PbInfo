#include <iostream>
#include <fstream>
using namespace std;
ifstream in("permutari.in");
ofstream out("permutari.out");

int st[1000], A[1000], N;

bool Ok(int k) {
    for(int i = 1; i < k; i++)
        if(st[i] == st[k])
            return 0;
    return 1;
}
void Afis(int k) {
    for(int i = 1; i <= k; i++)
        out << st[i] << " ";
    out << endl;
}

void Backtrack(int k, int N) {
    for(int i = 1; i <= N; i++) {
        st[k] = A[i];
        if(Ok(k))
            if(k == N)
                Afis(k);
            else
                Backtrack(k + 1, N);
    }
}

void Quicksort(int A[], int l, int r) {
    int i, j, p;
    i = l;
    j = r;
    p = A[l + (r - l) / 2];
    do {
        while(i <= r && A[i] < p)
            i++;
        while(j >= l && A[j] > p)
            j--;
        if(i <= j) {
            swap(A[i], A[j]);
            i++;
            j--;
        }
    } while(i <= j);

    if(i < r)
        Quicksort(A, i, r);
    if(j > l)
        Quicksort(A, l, j);
}

int main() {
    in >> N;
    for(int i = 1; i <= N; i++)
        in >> A[i];

    Quicksort(A, 1, N);
    Backtrack(1, N);
    return 0;
}
