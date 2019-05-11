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
    cin.get(s, 255);
    vector<char> A;
    int k = 0;
    int i = 0;
    while(s[i] != '\0') {
        A.push_back(s[i]);
        if(isVow(s[i])) {
            A.push_back('*');
            k++;
        }
        i++;
    }
    if(k == 0)
        cout << "FARA VOCALE";
    else
        for(int i = 0; i < A.size(); i++)
            cout << A[i];

    return 0;
}
