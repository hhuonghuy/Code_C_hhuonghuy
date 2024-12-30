#include <stdio.h>
#include <math.h>
void main()
{
    printf("Giai phuong trinh bac 2 ax2+bx+c=0\n");
    float a, b, c, d, x1, x2;
    printf("Xin moi nhap vao bien a:");
    scanf("%f", &a);
    printf("Xin moi nhap vao bien b:");
    scanf("%f", &b);
    printf("Xin moi nhap vao bien c:");
    scanf("%f", &c);
    if (a == 0)
    {
        if (b == 0 && c == 0)
        {
            printf("\nPhuong trinh co vo so nghiem!");
        }
        else if (b == 0 && c != 0)
        {
            printf("\nPhuong trinh vo nghiem!");
        }
        else
        {
            printf("Phuong trinh co 1 nghiem x = %.2f", -c / b);
        }
    }
    else
    {
        d = b * b - 4 * a * c;
        x1 = (-b + sqrt(d)) / (2 * a);
        x2 = (-b - sqrt(d)) / (2 * a);
        if (d == 0)
            printf("\nPhuong trinh co nghiem kep x = %.2f", -b / (2 * a));
        if (d < 0)
            printf("\nPhuong trinh vo nghiem!");
        if (d > 0)
            printf("Phuong trinh co 2 nghiem rieng biet\n x1 la:%.2f\n x2 la:%.2f", x1, x2);
    }
}