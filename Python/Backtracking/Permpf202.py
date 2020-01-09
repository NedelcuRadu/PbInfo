https://www.pbinfo.ro/probleme/202/permpf
n = int(input("N="))
st = [0] * (n + 1)
nrsol=0

def ok(k):
    global st
    if k == 1 and st[1]!=1:
        return 1
    if st[k] not in st[:k] and st[k]!=k:
        return 1
    return 0

def bkt(k):
    global n, st, nrsol
    for x in range(1, n+1):
        st[k] = x
        if ok(k):
            if k == n:
                print(st[1:])

                nrsol+=1
            else:
                bkt(k + 1)

bkt(1)

