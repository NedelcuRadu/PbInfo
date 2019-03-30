#include <iostream>
#include <fstream>
using namespace std;
ifstream in("hugecontrol.in");
ofstream out("hugecontrol.out");

long long int suma(long long int n) {
    long long int S = 0;
    while(n) {
        S = S + n % 10;
        n = n / 10;
    }
    return S;
}
int main() {
    char k;
    long long int S = 0;
    while(in >> k) {
        S = S + k - 48;
    }
    while(S > 10) {
        S = suma(S);
    }
    out << S;

    return 0;
}
