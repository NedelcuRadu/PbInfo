''' Problema rucsacului varianta discreta
Intrare:
G= 10 (Greutatea maxima)
2 40 (Greutate,castig)
3 300
15 3000
4 45
8 160

Sol: 385, (2,40)(3,300)(4,45) aka ob1 + ob2 + ob4
'''
L = []  # Lista cu obiecte L[0] = greutate : L[1] = castig
with open("E:\PyCharmProjects\data3.in") as f:
    G = int(f.readline())
    for x in f:
        L.append(tuple(int(y) for y in x.split()))

n = len(L)
m = G + 1


def reconstituire():
    global cmax, n, m
    j = m - 1
    i = n - 1
    sol = []
    while i >= 0 and j >= 0:
        if cmax[i][j] != cmax[i - 1][j]:
            sol.append(L[i])
            j -= L[i][0]
        i -= 1
    print(sol[::-1])


cmax = [[0] * m for x in range(n)]  # Castigul maxim cu primele i obiecte in greutatea j

for i in range(m):
    cmax[0][i] = 0

for j in range(n):
    cmax[j][0] = 0

for i in range(0, n):  # Pt fiecare obiect
    for j in range(0, m):  # Pt fiecare greutate
        if L[i][0] <= j:  # Daca obiectul poate fi pus
            cmax[i][j] = max(cmax[i - 1][j], L[i][1] + cmax[i - 1][j - L[i][0]])
        else:
            cmax[i][j] = cmax[i - 1][j]

for x in cmax:
    print(*x)

reconstituire()
