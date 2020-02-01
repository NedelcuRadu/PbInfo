''' Se dau N piese de domino ( nu pot fi rasucite ), se cere sa se afle cate siruri de lungime maxima se pot forma si care sunt O(n^2)
Intrare:
7
1 8
1 5
5 3
5 2
4 8
2 4
2 3

Sol: 2 siruri, (1 5)(5 2)(2 4)
  DE CE NU E 4 LUNGIMEA MAX?
'''

L = []


def reconstituire():
    global L, lmax, pred
    indice = 0
    maxim = max(lmax)
    count = 0
    for i in range(len(lmax)):
        if lmax[i] == maxim:
            count += 1
            indice = i

    print(f"Sunt {count} siruri")
    sol = [L[indice]]
    while pred[indice] != -1:
        indice = pred[indice]
        sol.append(L[indice])
    print(f"Sirul este {sol[::-1]}")


with open("E:\PyCharmProjects\data2.in") as f:
    x = f.readline()
    for x in f:
        L.append(tuple(int(y) for y in x.split()))

print(L)

lmax = [0] * len(L)
pred = [-1] * len(L)
lmax[0] = 1

for i in range(1, len(L)):
    for j in range(0, i):
        if L[j][1] == L[i][0]:
            if lmax[i] < 1 + lmax[j]:
                lmax[i] = 1 + lmax[j]
                pred[i] = j

print(lmax)
reconstituire()
