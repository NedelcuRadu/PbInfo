#include <bits/stdc++.h>
using namespace std;

int main() {
    char s[256];
    cin.get(s, 255);
    int i=0;
    int A[5];
    for(int i=0;i<5;i++)
        A[i]=0;
    while(s[i] != '\0') {
        if(s[i] == 'a' || s[i] == 'A')
            A[0]++;
        else if(s[i] == 'e' || s[i] == 'E')
            A[1]++;
        else if(s[i] == 'i' || s[i] == 'I')
            A[2]++;
        else if(s[i] == 'o' || s[i] == 'O')
            A[3]++;
        else if(s[i] == 'u' || s[i] == 'U')
            A[4]++;
            i++;
    }
    int maxi=0;
 for(int i=0;i<5;i++)
    if(A[i]>maxi)
        maxi=A[i];
    for(int i=0;i<5;i++)
        if(maxi == A[i])
        switch (i)  {
            case 0: cout<<"A"; return 0;
            case 1: cout<<"E"; return 0;
            case 2: cout<<"I"; return 0;
            case 3: cout<<"O"; return 0;
            case 4: cout<<"U"; return 0;
        }


    return 0;
}
