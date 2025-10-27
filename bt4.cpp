#include <stdio.h>
int main() {
    int month;
    printf("nhap thang: ");
    scanf("%d", &month);
    if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
    printf("thang %d, 31 ngay\n" , month);
	} else if (month == 4 || month == 6 || month == 9 || month == 11) {
	printf("thang %d, 30 ngay\n" , month);
	} else if (month == 2) {
	printf("Thang 2 co 28 hoac 29 ngay\n");
	} else {
	printf("thang ko hop le\n"); 
	}
	return 0;
}
	
    
    
