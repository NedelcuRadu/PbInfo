#include <bits/stdc++.h>
using namespace std;


bool isAcc(char s) {
    static char a[] = "aeou";
    for(int i = 0; i < 5; i++)
        if(a[i] == s)
            return 0;
    return 1;
}

int main() {
    char s[256];
    cin.get(s, 255);
    int i = 0;
    bool k = 0;
    while(s[i] != '\0') {
        if(s[i] != 'i')
            k = 1;
        if(!isAcc(s[i])) {
            cout << "NU";
            return 0;
        }
        i++;
    }
    if(k == 1)
        cout << "DA";
    else
        cout << "NU";
    return 0;

    return 0;
}
