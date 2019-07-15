#include <iostream>
#include <fstream>
#define MAX 1002
using namespace std;
ifstream in("matrice_div_et_imp.in");
ofstream out("matrice_div_et_imp.out");

int N,M, A[2048][2048];


int Divide(int A[2048][2048], int x1, int x2,int y1, int y2) {
   if(x2-x1==1 && y2-y1==1)
    {
        out<<A[x1][y1]<<" "<<A[x2][y2]<<" "<<A[x1][y2]<<" "<<A[x2][y1]<<" ";
        return 0;
    }

    int m1=x1+(x2-x1)/2;
    int m2=y1+(y2-y1)/2;

    Divide(A,x1,m1,y1,m2);
    Divide(A,m1+1,x2,m2+1,y2);
    Divide(A,x1,m1,m2+1,y2);
    Divide(A,m1+1,x2,y1,m2);


}

int main() {
    in >> N;
   N=(1<<N);
    for(int i=1;i<=N;i++)
        for(int j=1;j<=N;j++)
       in>>A[i][j];


        Divide(A,1,N,1,N);


    return 0;
}
