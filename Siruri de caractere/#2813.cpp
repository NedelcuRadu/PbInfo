#include <bits/stdc++.h>
using namespace std;

bool k=0;
const char *note[]= {"DO", "RE", "MI", "FA", "SI", "SOL", "LA"};

void solve(char s[]) {
    for(int i=0; i<7; i++) {
        if(strstr(s, note[i])) {
            cout<<s<<endl;
            k=1;
            break;
        }
    }
}

int main() {
    char s[256];
    cin.get(s,256);
    char *p=strtok(s," ");
    while(p!=NULL) {
        solve(p);
        p=strtok(NULL," ");
    }
    if(k==0)
        cout<<"nu exista";
    return 0;
}
