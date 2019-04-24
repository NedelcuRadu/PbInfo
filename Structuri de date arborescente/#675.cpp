#include <iostream>
#include <fstream>
using namespace std;
ifstream in("bifrunze.in");
ofstream out("bifrunze.out");

int main() {
    int N, x, y, z;
    in >> N;
    for(int i = 1; i <= N; i++) {
        in >> z >> x >> y;
        if(x == 0 && y == 0)
            out << i << " ";
    }

    return 0;
}
