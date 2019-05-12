#include <iostream>
using namespace std;

bool isVow(char s) { //E vocala?
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
    int i = 0;

    while(s[i] != '\0') {
        if(isVow(s[i]))
            s[i]=s[i]-32; //Litera mare
        cout<<s[i];
        i++;
    }

    return 0;
}
