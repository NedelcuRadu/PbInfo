#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

typedef struct nod
{
    int key;
    nod *urm;
}*pNod;

pNod A[100010];
vector<int> B;
bool viz[500010];
int N,M;

void add(pNod &dest, int akey)
{
    pNod p = new nod;
    p->key =akey;
    p->urm=dest;
    dest=p;
}

void citire()
{
    int x,y;
    cin>>N>>M;
    for(int i=1; i<=M; i++)
    {
        cin>>x>>y;
        add(A[x],y);
    }
}

void DFS(int nod)
{
    viz[nod]=1;
    for(pNod p=A[nod]; p; p=p->urm)
        if(!viz[p->key])
            DFS(p->key);
    B.push_back(nod);
}

int main()
{
    citire();
    for(int i=N; i>0; i--)
        if(!viz[i])
            DFS(i);
    for(int i=B.size()-1; i>=0; i--)
        cout<<B[i]<<" ";
    return 0;
}
