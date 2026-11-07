#include <stdio.h>

int hitung(int nilai1, int nilai2) {
    return nilai1 - nilai2;
}

int mutlak(int angka) {
    if (angka < 0) {
        return -angka;
    } else {
        return angka;
    }
}

int main() {
    int a, b, c, d;

    scanf("%d %d %d %d", &a, &b, &c, &d);

    int hasil = hitung(mutlak(hitung(a, c)), 0)
              + hitung(mutlak(hitung(b, d)), 0);

    printf("%d\n", hasil);

    return 0;
}