#include <bits/stdc++.h>
using namespace std;
ifstream in("paritatesiruri.in");
ofstream out("paritatesiruri.out");

void afis(vector<char> A) {
    for(int i = 0; i < A.size(); i++)
        out << A[i];
}

void solve(char s[]) {
    vector<char> A;
    vector<char> B;
    for(int i = 0; i < strlen(s); i++)
        if(i % 2 == 0)
            A.push_back(s[i]);
        else
            B.push_back(s[i]);
    afis(B);
    out << " ";
    afis(A);
    out << endl;

}

int main() {
    int N;
    char s[10001];
    in >> N;
    in.get();
    for(int i = 1; i <= N; i++) {
        in.getline(s, 10001);
        solve(s);
    }
    
    return 0;
}
