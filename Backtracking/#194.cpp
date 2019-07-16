#include <iostream>
#include <fstream>
using namespace std;
ifstream in("anagrame1.in");
ofstream out("anagrame1.out");
char A[10];
int st[100];
int len;
bool ok(int k) {
    for(int i = 1; i < k; i++)
        if(st[i] == st[k])
            return 0;
    return 1;
}
void afis(int k) {
    for(int i = 1; i <= k; i++)
        out << A[st[i] - 1];
    out << '\n';
}
void backtrack(int k) {
    for(int i = 1; i <= len; i++) {
        st[k] = i;
        if(ok(k))
            if(k == len)
                afis(k);
            else
                backtrack(k + 1);
    }
}
void QUICKSORT(char A[], int inf, int sup) {
  int x, i, j, t;
  i = inf;
  j = sup;
  x = A[(i + j) / 2]; //Elementul din mijloc e pivotul
  do {
    while ( (i < sup) && (A[i] < x) ) i++; //Cate elemente mai mici decat pivotul sunt
    while ( (j > inf) && (A[j] > x) ) j--; //Cate elemente mai mari decat pivotul
    if ( i <= j ) { //Le schimbam intre ele
     swap(A[i],A[j]);
      i++;
      j--;
    }
  } while ( i <= j );
  if ( inf < j ) QUICKSORT(A, inf, j); //Sortam bucatile ramase
  if ( i < sup ) QUICKSORT(A, i, sup);
}
int strlen(char A[]) {
    int n = 0;
    while(A[n] != '\0')
        n++;
    return n;
}
int main() {
    in.get(A, 10);
    len = strlen(A);
    QUICKSORT(A,0,len-1);
    backtrack(1);
    return 0;
}
