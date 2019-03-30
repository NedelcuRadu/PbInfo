#include <iostream>
#define MIN(a,b) (a<b)? a : b
using namespace std;
long long int combinari(long long int n, long long int k) {
    long long int P = 1;
    long long int O = 1;
    for(long long int i = k + 1; i <= n; i++)
        P = P * i;
    for(long long int i = 1; i <= n - k; i++)
        O *= i;
    return P / O;
}
int main() {
    long long int n;
    cin >> n;
    for(long long int i = 0; i <= n; i++)
        cout << combinari(n, i) << " ";

    return 0;
}
