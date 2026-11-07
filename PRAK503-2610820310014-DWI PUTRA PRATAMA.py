
def maksimal(a, b):
    if a > b:
        return a
    else:
        return b

def minimal(a, b):
    if a < b:
        return a
    else:
        return b

N = int(input())

angka = list(map(int, input().split()))

maks = angka[0]
minim = angka[0]

for i in range(1, N):
    nilai = angka[i]

    maks = maksimal(maks, nilai)
    minim = minimal(minim, nilai)

print(maks, minim)
