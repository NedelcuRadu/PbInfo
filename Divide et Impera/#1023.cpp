#include <iostream>
#define MAX 1002
using namespace std;

int N, A[MAX];

int cmmdc(int a, int b) {
    if(a * b == 0)
        return a;
    return cmmdc(b, a % b);
}

int Divide(int A[], int l, int r) {
    if(l == r)
        return 0;
    if(r - l == 1)
        return cmmdc(A[r], A[l]);

    int m = l + (r - l) / 2;
    return cmmdc(Divide(A, l, m), Divide(A, m + 1, r));
}

int main() {
    cin >> N;
    for(int i = 1; i <= N; i++)
        cin >> A[i];

    cout << Divide(A, 1, N);


    return 0;
}
