#include <bits/stdc++.h>
using namespace std;

int main() {
    char s[256];
    cin.get(s, 255);
    char *p = strtok(s, " ");
    while(p != NULL) {
        if(p[0] >= 'A' && p[0] <= 'Z')
            cout << p[0];
        p = strtok(NULL, " ");
    }


    return 0;
}
