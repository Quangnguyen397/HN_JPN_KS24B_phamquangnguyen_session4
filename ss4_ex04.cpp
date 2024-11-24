#include <stdio.h>
int main() {
    int thang;
    scanf("%d", &thang);
    if (thang == 1 || thang == 3 || thang == 5 || thang == 7 || thang == 8 || thang == 10 || thang == 12)
        printf("thang nay co 31 ngay");
    else if (thang == 4 || thang == 6 || thang == 9 || thang == 11)
        printf("thang nay co 30 ngay");
    else if (thang == 2)
        printf("co 28 ngay  hoac 29 ngay");
    else
        printf("Khong hop le");
    return 0;
}

