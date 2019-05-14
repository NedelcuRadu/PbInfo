#include <bits/stdc++.h>
using namespace std;

int main() {
    char s[256];
    cin.get(s,256);
    char *p=strtok(s," ");
    int j=0;
    while(p!=NULL) {
        cout<<p<<" ";
        p=strtok(NULL," ");
    }

    return 0;
}
