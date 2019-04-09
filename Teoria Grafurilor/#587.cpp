#include <vector>
#include <fstream>
#include <string.h>
using namespace std;

ifstream in("date.in");
int N,M,Start;
vector<int>A[101];
bool viz[1004];
int viz2[1004];
void citire()
{
    int x,y;
    in>>N>>M;
    for(int i=1;i<=M;i++)
    {   in>>x>>y;
        A[x].push_back(y);
    }
}

void DFS(int nod)
{
    viz[nod]=1;
    viz2[nod]++;
    for(int i=0; i<A[nod].size(); i++)
        if(!viz[A[nod][i]])
            DFS(A[nod][i]);
}

int main()
{
  citire();
    for(int i=1; i<=N; i++)
    {
        memset(viz,0,sizeof(viz));
        DFS(i);
    }
    for(int i=1; i<=N; i++)
        if(viz2[i]==N)
        {
            cout<<i;
            return 0;
        }
    cout<<"NU EXISTA";
    return 0;
}
