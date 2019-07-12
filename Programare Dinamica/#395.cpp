#include <iostream>
#include <fstream>
using namespace std;

ifstream in("comori.in");
ofstream out("comori.out");
int N, M;

int main() {
    in >> N >> M;
    int A[N + 1][M + 1];
    for(int i = 1; i <= N; i++)
        for(int j = 1; j <= M; j++)
            in >> A[i][j];

    for(int i = 1; i <= N; i++)
        for(int j = 1; j <= M; j++)
            if(i == 1)
                A[i][j] = A[i][j];
            else {
                if(j == 1)
                    A[i][j] += max(A[i - 1][j], A[i - 1][j + 1]);
                else {
                    if(j == M)
                        A[i][j] += max(A[i - 1][j], A[i - 1][j - 1]);
                    else
                        A[i][j] += max(max(A[i - 1][j], A[i - 1][j - 1]), A[i - 1][j + 1]);
                }
            }

    int maxi = 0;
    for(int i = 1; i <= M; i++)
        if(A[N][i] > maxi)
            maxi = A[N][i];

    out << maxi << endl;
    return 0;
}


