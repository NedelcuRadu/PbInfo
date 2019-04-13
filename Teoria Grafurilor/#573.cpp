#include <iostream>
#include <vector>
using namespace std;
int gradE[101];
int gradI[101];
int N, M;
vector<int>A;
void citire() {
    int x, y;
    cin >> N >> M;
    for(int i = 1; i <= M; i++) {
        cin >> x >> y;
        gradE[x]++;
        gradI[y]++;
    }

}
int main() {
    citire();
    for(int i = 1; i <= N; i++)
        if(gradE[i] == gradI[i])
            A.push_back(i);

    cout << A.size() << endl;
    for(int i = 0; i < A.size(); i++)
        cout << A[i] << " ";

    return 0;
}
