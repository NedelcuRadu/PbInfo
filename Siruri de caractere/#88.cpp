#include <bits/stdc++.h>
using namespace std;
ifstream in("palindrom.in");
ofstream out("palindrom.out");

bool palindrom(char s[]) {
    int len = strlen(s);
    for(int i = 0; i < strlen(s) / 2; i++)
        if(s[i] != s[len - 1 - i])
            return 0;
    return 1;
}
int main() {
    char s[256];
    int n, k = 0;
    in >> n;
    in.get();
    for(int i = 1; i <= n; i++) {
        in.getline(s, 256);
        out << palindrom(s) << endl;
    }

    return 0;
}
