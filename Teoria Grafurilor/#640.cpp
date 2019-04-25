#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

ifstream in("nrfii.in");
ofstream out("nrfii.out");

int N, root, maxi = 0;
int A[101], viz[101];
vector<int>p;

void citire() {
    int x;
    in >> N;
    for(int i = 1; i <= N; i++) {
        in >> x;
        A[x]++; //Vector de frecventa
    }
}

int main() {
    citire();
    for(int i = 1; i <= N; i++) {
        if(A[i] > maxi) { //Daca gasim un nou maxim stergem nodurile considerate anterior
            p.clear();
            maxi = A[i];
            p.push_back(i);
        } else if(A[i] == maxi)
            p.push_back(i);
    }
    for(int i = 0; i < p.size(); i++)
        out << p[i] << " ";
    return 0;
}
