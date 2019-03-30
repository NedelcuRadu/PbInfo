#include <iostream>
#include <fstream>
#define MAX(a, b) ((a > b) ? a : b)
using namespace std;
ifstream in("intervale4.in");

struct stiva {
    int n = 0;
    int a[100100];
    int top() {
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
    char *p[21000];
    int y = 0;
    stiva a, b;
    int n;
    int x;
    in >> n;
    for(int i = 1; i <= n; i++) {
        in >> x;
        a.push(x);
    }
    if(a.semn() % 2 == 0) {
        cout << "0";
        return 0;
    }
    int caut = 1;
    while(caut <= n) {
        while(a.top() == caut) {
            p[++y] = "A C";
            a.pop();
            caut++;
        }
        while(b.top() == caut) {
            b.pop();
            p[++y] = "B C";
            caut++;
        }
        if(!a.isempty()) {
            b.push(a.top());
            a.pop();
            p[++y] = "A B";
        }

    }
    cout << y << endl;
    for(int i = 1; i <= y; i++)
        cout << p[i] << endl;
    return 0;
}
