#include <fstream>
using namespace std;
ifstream in("graf_complet.in");
ofstream out("graf_complet.out");
int G, N;
bool A[55][55];
void citire() {
    in >> N;
    for(int i = 1; i <= N; i++)
        for(int j = 1; j <= N; j++)
            in >> A[i][j];
}
bool solve() {
    for(int i = 1; i <= N; i++)
        for(int j = 1; j <= N; j++)
            if(i != j)
                if(A[i][j] == 0)
                    return 0;
    return 1;
}
int main() {
    in >> G;
    for(int i = 1; i <= G; i++) {
        citire();
        if(solve())
            out << "DA" << endl;
        else
            out << "NU" << endl;
    }
    return 0;
}
