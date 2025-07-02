#include <stdio.h>

int laNamNhuan(int nam) {
    return (nam % 400 == 0) || (nam % 4 == 0 && nam % 100 != 0);
}

int soNgayTrongThang(int thang, int nam) {
    switch (thang) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            return 31;
        case 4: case 6: case 9: case 11:
            return 30;
        case 2:
            return laNamNhuan(nam) ? 29 : 28;
        default:
            return 0;
    }
}

int main() {
    int ngay, thang, nam;

    printf("Nhap ngay: ");
    scanf("%d", &ngay);
    printf("Nhap thang: ");
    scanf("%d", &thang);
    printf("Nhap nam: ");
    scanf("%d", &nam);

    int ngayMax = soNgayTrongThang(thang, nam);

    if (ngay < 1 || ngay > ngayMax || thang < 1 || thang > 12 || nam < 1) {
        printf("Ngay thang nam khong hop le.\n");
        return 0;
    }

    ngay++;

    if (ngay > ngayMax) {
        ngay = 1;
        thang++;
        if (thang > 12) {
            thang = 1;
            nam++;
        }
    }

    printf("Ngay ke tiep la: %02d/%02d/%d\n", ngay, thang, nam);

    return 0;
}

