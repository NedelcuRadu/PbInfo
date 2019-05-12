#include <bits/stdc++.h>
using namespace std;
ifstream in("vocmax.in");
ofstream out("vocmax.out");

struct prop {
    int voc;
    char s[256];
};

bool isVow(char s) {
    static char a[] = "aeiou";
    for(int i = 0; i < 6; i++)
        if(a[i] == s)
            return 1;
    return 0;
}

int nrVow(char s[]) {
    int k = 0;
    for(int i = 0; i < strlen(s); i++)
        if(isVow(s[i]))
            k++;
    return k;
}

int main() {
    prop A[100];
    int n;
    int maxi = 1;
    in >> n;
    in.get();
    for(int i = 1; i <= n; i++) {
        in.getline(A[i].s, 256);
        A[i].voc = nrVow(A[i].s);
        if(A[i].voc > A[maxi].voc)
            maxi = i;
    }
    out << A[maxi].s;
    return 0;
}
