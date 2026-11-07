#include <stdio.h>

int MaxBilangan(int a, int b, int c, int d) {
    int maksimal = a;

    if (b > maksimal) {
        maksimal = b;
    }
    if (c > maksimal) {
        maksimal = c;
    }
    if (d > maksimal) {
        maksimal = d;
    }

    return maksimal;
}

int main() {
    int a, b, c, d;

    scanf("%d %d %d %d", &a, &b, &c, &d);

    int hasil = MaxBilangan(a, b, c, d);

    printf("%d\n", hasil);

    return 0;
}