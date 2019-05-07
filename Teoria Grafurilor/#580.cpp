#include <iostream>
#include <vector>
using namespace std;

bool A[101][101];
int N,M;

void citire()
{
    int x,y;
    in>>N>>M;
    for(int i=1; i<=M; i++)
    {
        in>>x>>y;
        A[x][y]=1;
    }
}

void RoyFloyd()
{
    for(int k=1; k<=N; k++)
        for(int i=1; i<=N; i++)
            for(int j=1; j<=N; j++)
                if(A[i][k] && A[k][j])
                    A[i][j]=1;
}

void afis()
{
    for(int i=1; i<=N; i++)
    {
        for(int j=1; j<=N; j++)
            cout<<A[i][j]<<" ";
        cout<<endl;
    }
}


int main()
{
    citire();
    RoyFloyd();
    afis();
    return 0;
}
