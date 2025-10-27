#include <stdio.h>
int main() {
    int nam_sinh, tuoi;
    float diem_tb;
    int nam_hien_tai = 2025; 
    printf("Nhap nam sinh: ");
    scanf("%d", &nam_sinh);
    if (nam_sinh <= 1900 || nam_sinh > nam_hien_tai) {
    printf("Nam sinh khong hop le\n");
}
    printf("Nhap diem trung binh: ");
    scanf("%f", &diem_tb);
    tuoi = nam_hien_tai - nam_sinh;
    char hoc_luc[20];
    if (diem_tb < 5.0)
    sprintf(hoc_luc, "Yeu");
    else if (diem_tb < 6.5)
    sprintf(hoc_luc, "Trung binh");
    else if (diem_tb < 8.0)
    sprintf(hoc_luc, "Kha");
    else
    sprintf(hoc_luc, "Gioi");
    printf("\nThong tin sinh vien:\n");
    printf("Nam sinh: %d\n", nam_sinh);
    printf("Tuoi: %d\n", tuoi);
    if (tuoi >= 18)
    printf("Sinh vien du 18 tuoi\n");
    else
    printf("Sinh vien chua du 18 tuoi\n");
    printf("Hoc luc: %s\n", hoc_luc);

    return 0;
}
