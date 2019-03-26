#include <iostream>
#include <string.h>
using namespace std;
struct cub {
    int ord;
    int latura;
};
int n=0;
cub a[1100];
int N;


void pop() {
    n--;
}

int top() {
    if(n>0)
        return a[n].latura;
}

void push(int x, int i) {
    n++;
    a[n].latura=x;
    a[n].ord=i;
}
bool isempty() {
    if (n==0)
        return 1;
    return 0;
}
void afis() {
    for(int i=1; i<=n; i++)
        cout<<a[i].ord<<" ";
    cout<<'\n';
}

int main() {
    char b[100];
    int x;
    cin>>N;
    for(int i=1; i<=N; i++) {
        cin>>x;
        if(isempty())
            push(x,i);
        else {
            if(x<=top())
                push(x,i);
            else {
                while(x>top() && !isempty())
                    pop();
                push(x,i);
            }
        }
    }
    cout<<n<<'\n';
    afis();


    return 0;
}
