# Se da o suma S si diferite monede
def reconstituire():
    global nrmin,pred,suma
    print(f"Pt suma {suma} s-au folosit {nrmin[-1]} monede")
    poz=suma
    while pred[poz]!=-1:
        print(pred[poz])
        poz -= pred[poz]


with open("data.in") as f:
    suma = int(f.readline())
    L = [int(x) for x in f.readline().split()]

nrmin = [float("Inf")] * (suma + 1)
pred = [-1] * (suma + 1)
nrmin[0] = 0

for i in range(suma + 1):
    for m in L:
        if m <= i:
            if 1 + nrmin[i - m] < nrmin[i]:
                nrmin[i] = 1 + nrmin[i - m]
                pred[i] = m


print(nrmin)
print(pred)
reconstituire()
