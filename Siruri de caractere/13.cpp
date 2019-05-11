#include <bits/stdc++.h>
using namespace std;

int main() {
    char s[256];
    cin.get(s, 255);
    int l = strlen(s);
    while(l > 0) {
        for(int i = 0; i < l; i++)
            cout << s[i];
        cout << endl;
        l--;
    }
    while(l < strlen(s)) {
        for(int i = l; i < strlen(s); i++)
            cout << s[i];
        cout << endl;
        l++;
    }


    return 0;
}
