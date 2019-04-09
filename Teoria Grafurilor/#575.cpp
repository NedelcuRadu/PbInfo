#include <iostream>
using namespace std;
int N,M;
int ext[105];

void citire()
{
    int x,y;
    cin>>N>>M;
    for(int i=1; i<=M; i++)
    {
        cin>>x>>y;
        ext[x]++;
    }
}

int main()
{   int max=0;
    citire1();
    for(int i=1; i<=N; i++)
        if(inte[i]>max)
            max=inte[i];
    for(int i=1; i<=N; i++)
        if(inte[i]==max)
            cout<<i<<" ";
    return 0;
}
