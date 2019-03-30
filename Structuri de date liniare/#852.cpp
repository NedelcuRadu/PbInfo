#include <iostream>
#include <fstream>
#include <string.h>
#define MAX(a, b) ((a > b) ? a : b)
using namespace std;
ifstream in("paranteze3.in");
ofstream out("paranteze3.out");
struct stiva {
    int n = 0;
    char a[100100];
    char top() {
        if(n > 0)
            return a[n];
        else
            return 0;
    }
    bool isempty() {
        if (n > 0)
            return 0;
        return 1;
    }
    void push(int x) {
        a[++n] = x;
    }
    void pop() {
        if(n > 0)
            n--;
    }
    void afis() {
        if(n > 0)
            for(int i = 1; i <= n; i++)
                cout << a[i] << " ";
        cout << '\n';
    }
    int semn() {
        int k = 0;
        for(int i = 1; i < n; i++)
            for(int j = i + 1; j <= n; j++)
                if(a[i] > a[j])
                    k++;
        return k;

    }
};
int main() {
    char s[260];
    char z;
    int n;
    in >> n;
    in.get();
    for(int i = 1; i <= n; i++) {
        in.getline(s, 260);
        if(s[0] == ')' || s[0]==']' ||  strlen(s) % 2 == 1 )
            out << "0" << endl;
        else {
            stiva a;
            a.a[0] = 'y';
            for(int i = 0; i < strlen(s); i++) {
                z = a.top();
                a.push(s[i]);

                if((a.top() == ')' && z == '(') || (a.top()==']' && z == '[')) {
                    a.pop();
                    a.pop();
                }
            }
            if(a.isempty())
                out << "1" << endl;
            else
                out << "0" << endl;

        }
    }

    return 0;
}
