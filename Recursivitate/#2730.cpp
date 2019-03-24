#include <iostream>
#include <string.h>
using namespace std;
int S = 0;
int SC(char s[]) {
    for(int i = 0; i < strlen(s); i++)
        if(isdigit(s[i]))
            S += s[i] - 48;
    return S;
}
int main() {
    cout << SC("Ana are 15 mere si 185 de pere.");
    return 0;
}
