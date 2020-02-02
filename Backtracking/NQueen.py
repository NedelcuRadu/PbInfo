''' Problema celor N Regine: Se dau N regine si o tabla de sah de NxN, N>=4. Determinati o asezare a.i sa nu se atace.
Input: 4
Output:       { 0,  1,  0,  0}
              { 0,  0,  0,  1}
              { 1,  0,  0,  0}
              { 0,  0,  1,  0}       Codificat ca si 1,3,0,2 ( pe coloana 0 se afla regina la linia 1)
                                                                                                                        '''

N = int(input("N="))

A = [-1] * N


def ok(k):
    if A[k] in A[:k]:
        return False
    for i in range(k):
        if A[i] - i == A[k] - k:
            return False
    return True


def bkt(k):
    global A, N
    for x in range(N):
        A[k] = x
        if ok(k):
            if k == N - 1:
                print(A)
            else:
                bkt(k + 1)


bkt(0)
