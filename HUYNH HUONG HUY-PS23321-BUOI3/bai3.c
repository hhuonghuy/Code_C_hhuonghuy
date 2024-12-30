#include <stdio.h>
void main(){
    int a, b, r; /* chu vi a, dien tich b, r ban kinh */
    printf("Nhap ban kinh =");
    scanf("%d", &r);
    a = 2*3.14*r;
    b = 3.14*r*r;
    printf("Chu vi hinh tron:%d \n", a);
    printf("Dien tich hinh tron:%d \n", b);
}