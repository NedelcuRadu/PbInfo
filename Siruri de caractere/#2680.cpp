#include <bits/stdc++.h>
using namespace std;

int main() {
    char s[256];
    int N;
    cin >> N;
    cin.get();
    for(int i = 1; i <= N; i++) {
        cin.getline(s, 255);
        for(int j = 0; j < strlen(s) - 1; j++)
            if(isalpha(s[j]) || s[j] == ' ')
                cout << s[j];
        cout << s[strlen(s) - 1];
        cout << endl;

    }




    return 0;
}
