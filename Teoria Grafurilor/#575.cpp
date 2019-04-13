#include <iostream>
#include <vector>
using namespace std;

int gradI[101];
int N, M;
vector<int>A;
void citire() {
    int x, y;
    in >> N >> M;
    for(int i = 1; i <= M; i++) {
        in >> x >> y;
        gradI[y]++;
    }

}
int main() {
     int max = 0;
     
    citire();
    for(int i = 1; i <= N; i++)
        if(gradI[i] > max) {
            A.clear();
            A.push_back(i);
            max = gradI[i];
        } else if(gradI[i] == max)
            A.push_back(i);

    for(int i = 0; i < A.size(); i++)
        cout << A[i] << " ";

    return 0;
}
