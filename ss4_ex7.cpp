#include <stdio.h>
int main() {
    int namnhuan;
    scanf("%d", &namnhuan);
    if (( namnhuan % 4 == 0 && namnhuan % 100 != 0) || (namnhuan % 400 == 0))
        printf("Nam nhuan");
    else
        printf("Nam khong nhuan");
    return 0;
}

