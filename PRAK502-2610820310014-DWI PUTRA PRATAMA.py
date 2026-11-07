def hitung(nilai1, nilai2):
    return nilai1 - nilai2


def mutlak(angka):
    if angka < 0:
        return -angka
    else:
        return angka


a, b, c, d = map(int, input().split())

hasil = hitung(mutlak(a - c), 0) + hitung(mutlak(b - d), 0)

print(hasil)