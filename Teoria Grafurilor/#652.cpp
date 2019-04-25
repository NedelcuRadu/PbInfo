#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

ifstream in("afisarefii.in");
ofstream out("afisarefii.out");

vector<int> p;
int N, K, x;
int a[1001];

void citire() {
    in >> N;
    for(int i = 1; i <= N; i++)
        in >> a[i];
    in >> K;
}

int main() {
    citire();
    for(int i = 1; i <= K; i++) {
        p.clear(); //Pt fiecare nod
        in >> x;
        for(int j = 1; j <= N; j++)
            if(a[j] == x) //Daca tatal e nodul dat atunci am gasit un fiu
                p.push_back(j);
        out << p.size() << " "; //Afisare
        for(int o = 0; o < p.size(); o++)
            out << p[o] << " ";
        out << endl;
    }
    return 0;
}
