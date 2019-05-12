#include <bits/stdc++.h>
using namespace std;

int main() {

    char s[256];
    cin.getline(s, 256);
    int A[130];
    int B[130];
    int i = 0;
    for(int k = 0; k < 130; k++)
        A[k] = 0;
    for(int k = 0; k < 130; k++)
        B[k] = 0;

    char *p = strtok(s, " ");
    while(p[i] != '\0') {
        A[int(p[i])]++;
        i++;
    }
    p = strtok(NULL, " ");
    i = 0;
    while(p[i] != '\0') {
        B[int(p[i])]++;
        i++;
    }
    for(int i = 0; i < 130; i++)
        if(A[i] != B[i]) {
            cout << "0";
            return 0;
        }

    cout << "1";
    return 0;
}
