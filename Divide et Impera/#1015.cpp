
#include <iostream>
using namespace std;

int suma(int a[], int l, int r) {
    if(r == l)
        return a[l];
    else {
        int m = l + (r - l) / 2;
        return suma(a, l, m) + suma(a, m + 1, r);

    }
}

int main() {
    int n, a[1010];
    cin >> n;
    for(int i = 1; i <= n; i++)
        cin >> a[i];
    cout << suma(a,1,n);
         return 0;
}
