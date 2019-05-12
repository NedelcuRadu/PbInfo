#include <bits/stdc++.h>
using namespace std;

bool isVow(char s) {
    static char a[] = "aeiouAEIOU";
    for(int i = 0; i < strlen(a); i++)
        if(a[i] == s)
            return 1;
    return 0;
}

int main() {
    char s[101];
    cin.get(s, 101);
    char *nume = strtok(s, " ");
    char *pre = strtok(NULL, " ");
    for(int i = 0; i < strlen(nume); i++)
        if(!isVow(pre[i]))
            cout << pre[i];
        cout<< ' ';
    cout << nume;

    return 0;
}
