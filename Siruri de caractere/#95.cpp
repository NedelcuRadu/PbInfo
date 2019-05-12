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
    int i = 0;
    int k = 0;
    cin.get(s, 256);
    while(s[i + 1] != '\0') {
        if(isVow(s[i]) && isVow(s[i + 1]))
            k++;
        i++;
    }
    cout << k;
    return 0;
}
