#include <bits/stdc++.h>
using namespace std;

bool isVow(char s) {
    static char a[] = "aeiou";
    for(int i = 0; i < 6; i++)
        if(a[i] == s)
            return 1;
    return 0;
}

int main() {
    char s[256];
    cin.get(s, 255);
    cin.get();
    char *p = strtok(s, " ");
    while(p != NULL) {
        cout << char(p[0] - 32);
        for(int i = 1; i < strlen(p) - 1; i++)
            cout << p[i];
        if(strlen(p) > 1)
            cout << char(p[strlen(p) - 1] - 32) << " ";
        else
            cout << " ";
        p = strtok(NULL, " ");
    }


    return 0;
}
