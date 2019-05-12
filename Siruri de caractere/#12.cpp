#include <bits/stdc++.h>
using namespace std;

int main() {
    char s[256];
    cin.get(s, 255);
    cin.get();
    char *p = strtok(s, " ");
    while(p != NULL) { //Luam fiecare cuvant in parte
        cout << char(p[0] - 32); //Initiala litera mare
        for(int i = 1; i < strlen(p) - 1; i++)
            cout << p[i];
        if(strlen(p) > 1)
            cout << char(p[strlen(p) - 1] - 32) << " "; //Daca cuvantul are mai mult de o litera o transformam si pe ultima
        else
            cout << " ";
        p = strtok(NULL, " ");
    }
    
    return 0;
}
