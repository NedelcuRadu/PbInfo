#include <bits/stdc++.h>
using namespace std;

int main() {
    char s[256];
    cin.get(s,256);
    char *p=strtok(s," ");
    while(p!=NULL) {
        if(strlen(p)==3)
            cout<<"* ";
        else
            cout<<p<<" ";
        p=strtok(NULL," ");
    }

    return 0;
}
