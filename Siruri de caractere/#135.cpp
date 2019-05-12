#include <bits/stdc++.h>
using namespace std;

bool isVow(char s) {
    static char a[] = "aeiou";
    for(int i = 0; i < strlen(a); i++)
        if(a[i] == s)
            return 1;
    return 0;
}

int main() {
    char s[101];
    cin.get(s, 101);
    char *a = strtok(s, " ");
    char *b = strtok(NULL, " ");
    for(int i = 0; i < strlen(a); i++)
        if(isVow(a[i])) {
            if(isVow(b[i]))
                cout << '*';
            else
                cout << '?';
        } else {
            if(!isVow(b[i]))
                cout << '#';
            else
                cout << '?';
        }


    return 0;
}
