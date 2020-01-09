#https://www.pbinfo.ro/probleme/1327/sirpie
import numpy as np

n = int(input("N="))
st = [0] * (n + 1)
nr = np.genfromtxt("E:\PyCharmProjects\PbInfo\data.in", skip_header=1, dtype=int)
nr.sort()
nrsol=0
def cmmdc(a,b):
    if b==0:
        return a
    return cmmdc(b,a%b)

def afisare(k):
    global st, nr
    for x in st[1:]:
        print(nr[x - 1], end=" ")
    print()


def ok1(k):
    global st
    if k == 1:
        return 1
    if st[k] not in st[:k] and cmmdc(nr[st[k]-1],nr[st[k-1]-1])==1:
        return 1
    return 0


def bkt(k):
    global n, st, nrsol
    for x in range(1, n+1):
        st[k] = x
        if ok1(k):
            if k == n:
                afisare(k)
                nrsol+=1
            else:
                bkt(k + 1)


bkt(1)

