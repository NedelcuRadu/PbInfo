#include <bits/stdc++.h>
using namespace std;
ifstream in("vocmax.in");
ofstream out("vocmax.out");

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
    cin.get(s, 256);
    while(s[i] != '\0') {
        if(!isVow(s[i]))
            cout << s[i];
        i++;
    }

    return 0;
}
