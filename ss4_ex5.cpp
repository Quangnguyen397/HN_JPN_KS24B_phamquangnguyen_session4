#include <stdio.h>
int main() {
    int a, b,c;
    scanf("%d %d %d", &a, &b, &c);
    if ((c > a && c < b) || (c > b && c < a))
        printf("so c nam trong khoang");
    else
        printf("so c khong nam trong khoang");
    return 0;
}

