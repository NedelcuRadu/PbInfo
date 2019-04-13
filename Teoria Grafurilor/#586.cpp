#include <iostream>
#include <fstream>
#include <vector>
using namespace std;
int gradI[101];
int N, M;
vector<int>A;
void citire() {
    int x, y;
    cin >> N >> M;
    for(int i = 1; i <= M; i++) {
        cin >> x >> y;
        gradI[y]++;
    }

}
int main() {
    citire();
    for(int i = 1; i <= N; i++)
        if(gradI[i] == 0)
            A.push_back(i);

    if(A.size() == 0) {
        cout << "NU EXISTA";
        return 0;
    } else
        for(int i = 0; i < A.size(); i++)
            cout << A[i] << " ";

    return 0;
}
