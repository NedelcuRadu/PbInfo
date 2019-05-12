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
            k = (k + 1) % 2; //Caps is on
        else if(s[i] != ' ')
            if(k == 1)
                s[i] = s[i] - 32; //Litera mare
        i++;
    }
    for(int i = 0; i < strlen(s); i++)
        if(s[i] != '#') //Nu e caps
            out << s[i];
    return 0;
}
