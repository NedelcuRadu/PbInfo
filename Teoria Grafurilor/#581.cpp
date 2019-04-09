#include <iostream>
#include <vector>
#include <fstream>
#include <string.h>
using namespace std;
ifstream in("date.in");
int N,M,Start;
vector<int>A[101];
vector<int> Af;
int S[1000];
int cost[100];
void citire()
{
    int x,y;
    cin>>N>>Start>>M;
    for(int i=1; i<=M; i++)
    {
        cin>>x>>y;
        A[x].push_back(y);
    }
}

void BFS(int nod)
{
    memset(cost,-1,sizeof(cost));
    int L=1;
    S[L]=nod;
    cost[nod]=0;

    for(int i=1; i<=L; i++)
        for(int j=0; j<A[S[i]].size(); j++)
            if(cost[A[S[i]][j]]==-1)
            {
                S[++L]=A[S[i]][j];
                cost[S[L]]=cost[S[i]]+1;
            }
}

int main()
{
    citire();
    BFS(Start);
    for(int i=1; i<=N; i++)
        if(i!=Start && cost[i]%2==0)
            Af.push_back(i);

    cout<<Af.size()<<endl;
    for(int i=0; i<Af.size(); i++)
        cout<<Af[i]<<" ";
    return 0;
}
