#include <stdio.h>

int main() {
    int n, i, a[100];
    int maxAbs, temp;

    printf("Nhap so phan tu n: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    temp = a[0];
    if(temp < 0) temp = -temp;
    maxAbs = temp;

    for(i = 1; i < n; i++) {
        temp = a[i];
        if(temp < 0) temp = -temp;
        if(temp > maxAbs)
            maxAbs = temp;
    }
    printf("Gia tri x can tim la: %d\n", maxAbs);
    printf("Doan [-x, x] la: [-%d, %d]\n", maxAbs, maxAbs);
}

