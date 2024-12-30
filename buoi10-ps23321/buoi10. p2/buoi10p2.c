#include <stdio.h>

void main()
{
    int a, b;
    printf("Nhap 2 so a, b:\n");
    scanf("%d%d", &a, &b);

    printf("Ban da nhap:\na = %d \nb = %d\n", a, b);

    int temp = a;
    a = b;
    b = temp;

    printf("Sau khi hoan vi:\na = %d\nb = %d\n", a, b);
}