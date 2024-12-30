#include <stdio.h>
int a[100];
int n = 0;
void nhap()
{
    printf("Nhap vao so phan tu n:");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
}
void xuat()
{
    printf("Hien ra tren man hinh \n");
    for (int i = 0; i < n; i++)
    {
        printf("a[%d] = %d \t", i, a[i]);
    }
}
void tinhTBC3()
{
    printf("Tinh trung binh cong chia het cho 3 \n");
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 3 == 0)
        {
            printf("a[%d] = %d \t", i, a[i]);
            sum += a[i];
        }
    }
    printf("\n sum: %d", sum);
}
int main()
{
    printf("Tinh trung binh cong chia het cho 3 \n");
    nhap();
    xuat();
    tinhTBC3();
}