#include <stdio.h>

int main() {
    float thunhap, thue = 0;

    printf("Nhap thu nhap ca nhan (trieu dong/thang): ");
    scanf("%f", &thunhap);

    if (thunhap <= 5) {
        thue = thunhap * 0.05;
    } else if (thunhap <= 10) {
        thue = 5 * 0.05 + (thunhap - 5) * 0.10;
    } else if (thunhap <= 18) {
        thue = 5 * 0.05 + 5 * 0.10 + (thunhap - 10) * 0.15;
    } else if (thunhap <= 32) {
        thue = 5 * 0.05 + 5 * 0.10 + 8 * 0.15 + (thunhap - 18) * 0.20;
    } else if (thunhap <= 52) {
        thue = 5 * 0.05 + 5 * 0.10 + 8 * 0.15 + 14 * 0.20 + (thunhap - 32) * 0.25;
    } else if (thunhap <= 80) {
        thue = 5 * 0.05 + 5 * 0.10 + 8 * 0.15 + 14 * 0.20 + 20 * 0.25 + (thunhap - 52) * 0.30;
    } else {
        thue = 5 * 0.05 + 5 * 0.10 + 8 * 0.15 + 14 * 0.20 + 20 * 0.25 + 28 * 0.30 + (thunhap - 80) * 0.35;
    }

    printf("So tien thue phai nop: %.2f dong\n", thue);

    return 0;
}

