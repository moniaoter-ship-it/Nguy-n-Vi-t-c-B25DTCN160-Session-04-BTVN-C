#include <stdio.h>

int main() {
    int ngay, thang, nam;
    int hop_le = 1; // gi? s? ban d?u là h?p l?
    printf("Nhap ngay: ");
    scanf("%d", &ngay);
    printf("Nhap thang: ");
    scanf("%d", &thang);
    printf("Nhap nam: ");
    scanf("%d", &nam);
    if (thang < 1 || thang > 12) {
    hop_le = 0;
    } else {
    int max_day;
    switch (thang) {
    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
    max_day = 31;
    break;
    case 4: case 6: case 9: case 11:
    max_day = 30;
    break;
    case 2:
    if ((nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0))
    max_day = 29;
    else
    max_day = 28;
    break;
}
    if (ngay < 1 || ngay > max_day)
    hop_le = 0;
}
    if (hop_le)
    printf("Ngay thang nam hop le\n");
    else
    printf("Ngay thang nam khong hop le\n");
    return 0;
}
