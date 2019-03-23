#include <vector>
#include <fstream>
#include <algorithm>
#include <iostream>

using namespace std;

int N;
vector <int>V;
int A[110000];

int main() {
    cin >> N;
    int x;
    for(int i = 1; i <= N; i++) {
        cin >> x;
        V.push_back(x);
        A[x] = i;
    }
    sort(V.begin(), V.end());
    for(int i = 0; i < N; i++)
        cout << A[V[i]] << " ";
    return 0;
}
