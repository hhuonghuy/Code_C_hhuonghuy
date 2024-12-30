#include <stdio.h>
int main()
{
    int a[100];
    int n;
    printf("Nhap so luong phan tu n = \n");
    do
    {
        scanf("%d", &n);
        if(n <= 0)
        {
            printf("Nhap lai n = \n");
        }
    }
    while(n <= 0);
    
    for(int i = 0; i < n; i++)
    {
        printf("Nhap a[%d] = \n",i);
        scanf("%d", &a[i]);
    }
    int tg;
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(a[i] < a[j]){
                tg = a[i];
                a[i] = a[j];
                a[j] = tg;        
            }
        }
    }
    printf("Mang da sap xep la: \n");
    for(int i = 0; i < n; i++)
    {
        printf("%5d", a[i]);
    }
}
 