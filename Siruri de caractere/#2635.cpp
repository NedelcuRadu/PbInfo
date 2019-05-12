#include <bits/stdc++.h>
using namespace std;
ifstream in("capslock.in");
ofstream out("capslock.out");

int main() {
    char s[256];
    in.getline(s, 256);
    int i = 0;
    int k = 0;
    while(i < strlen(s)) {
        if(s[i] == '#')
            k = (k + 1) % 2;
        else if(s[i] != ' ')
            if(k == 1)
                s[i] = s[i] - 32;
        i++;
    }
    for(int i = 0; i < strlen(s); i++)
        if(s[i] != '#')
            out << s[i];
    return 0;
}
