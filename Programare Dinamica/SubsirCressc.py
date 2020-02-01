# Subsir cresc maximal varianta inapoi, sol = 1,7,7,8,9 sau 5,7,7,8,9

def reconstituire():
    global L, lmax, pred
    indice = 0
    max = 0
    for i in range(len(lmax)):
        if lmax[i] > max:
            indice = i
            max = lmax[i]
    print(f"Lungimea subsirului crescator maximal este {max}")
    sol = [L[indice]]
    while pred[indice] != -1:
        indice = pred[indice]
        sol.append(L[indice])
    print(f"Sirul este {sol[::-1]}")


with open("data2.in") as f:
    L = [int(x) for x in f.readline().split()]

lmax = [0] * (len(L))  # Lungimea max a unui subsir care se termina pe poz i
pred = [-1] * (len(L))
lmax[0] = 1

for i in range(1, len(L)):
    for j in range(0, i):
        if L[j] <= L[i]:
            if lmax[i] < 1 + lmax[j]:
                lmax[i] = 1 + lmax[j]
                pred[i] = j

reconstituire()
