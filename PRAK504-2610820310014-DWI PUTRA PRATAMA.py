def reverse(angka):
    hasil = 0

    while angka > 0:
        sisa = angka % 10
        hasil = hasil * 10 + sisa
        angka = angka // 10

    return hasil


A, B = map(int, input().split())

A = reverse(A)
B = reverse(B)

C = A + B

print(reverse(C))