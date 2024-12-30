#include <stdio.h>

// Xay ham gia tri lon nhat
int giatrilonnhat(a, b, c)
{
    int max;
    max = a;
    if( b > max)
    return b;
    if( c > max)
    return c;
}
int main()
{
    int a, b, c;
    int sln;
    printf("Nhap 3 so bat ky vao: ");
    scanf("%d%d%d", &a, &b, &c);
    printf("So lon nhat la:%d", sln);
}
