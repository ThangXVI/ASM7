#include <stdio.h>

int main() {
    int n, i, a[100];
    int min, max;

    printf("Nhap so phan tu n: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    min = max = a[0];
    for(i = 1; i < n; i++) {
        if(a[i] < min) min = a[i];
        if(a[i] > max) max = a[i];
    }
    printf("Doan chua tat ca gia tri trong mang la: [%d, %d]\n", min, max);
}

