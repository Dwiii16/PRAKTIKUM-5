#include <stdio.h>

int maksimal(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

int minimal(int a, int b) {
    if (a < b) {
        return a;
    } else {
        return b;
    }
}

int main() {
    int batas = 0;
    int maks = -100000;
    int minim = 100000;
    int bilangan, nilai;

    scanf("%d", &bilangan);

    while (batas < bilangan) {
        scanf("%d", &nilai);

        maks = maksimal(maks, nilai);
        minim = minimal(minim, nilai);

        batas++;
    }

    printf("%d %d\n", maks, minim);

    return 0;
}