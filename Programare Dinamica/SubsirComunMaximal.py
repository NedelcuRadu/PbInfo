''' Subsir comun maximal: Se dau 2 cuvinte. Det cel mai mare subsir comun al acestora.
Intrare:    SUBSIR
            RUSTICE
            => USI
                                                                                        '''

with open("E:\PyCharmProjects\data2.in") as f:
    sir1=f.readline()
    sir2=f.readline()

lmax=[[0]*len(sir2) for x in range(len(sir1))] # Subsirul maxim cu primele i litere din sir1 si primele j litere din sir 2

def reconstituire():
    global sir1,sir2,lmax
    i=len(sir1)-1
    j=len(sir2)-1
    sol=[]
    while i>0:
        if lmax[i][j]!=lmax[i-1][j]:
            sol.append(sir1[i])
        i-=1
    while j>0:
        if lmax[i][j]!=lmax[i][j-1]:
            sol.append(sir2[j-1])
        j-=1
    print(sol[::-1])

for i in range(len(sir1)):
    for j in range(len(sir2)):
        if sir1[i]==sir2[j]:
            print(sir1[i],i)
            lmax[i][j]=1+lmax[i-1][j]
        else:
            lmax[i][j]=max(lmax[i-1][j],lmax[i][j-1])


for linie in lmax:
    print(*linie)

reconstituire()
