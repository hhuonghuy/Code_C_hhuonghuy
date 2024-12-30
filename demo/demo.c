#include <stdio.h>

void main()
{

    int chucnang;
    int a, b;
    int ucln, bcnn;
    // menu
    printf("Chuc nang 1: Kiem tra so nguyen\n");
    printf("Chuc nang 2: UCLN va BCNN cua 2 so\n");
    printf("Chuc nang 3: Tinh tien karaoke\n");
    printf("Chuc nang 4: Tinh tien dien\n");
    printf("Chuc nang 6: Tinh nang lai suat ngan hang\n");
    printf("Chuc nang 8: sap xep sinh vien\n");
    printf("Chuc nang 9: Game Poly\n");

nhaplai:
    printf("Vui long chon chuc nang");
    scanf("%d", &chucnang);
    switch (chucnang)
    {

    case 1:
    {
        Kiemtra_SoNguyen();
        goto nhaplai;
        break;
    }
    case 2:
    {
        printf("Vui long nhap a:\n");
        scanf("%d", &a);
        printf("Vui long nhap b:\n");
        scanf("%d", &b);
        ucln = UCLN_BCNN(a, b);
        bcnn = (a * b) / ucln;
        printf("Ucln la: %d", ucln);
        printf("bcnn la: %d", bcnn);
        goto nhaplai;
        break;
    }
    case 3:
    {
        // Tinhtien_Karaoke();
        goto nhaplai;
        break;
    }
    case 4:
    {
        //Tinhtien_Dien();
        goto nhaplai;
        break;
    }
    default:
    {
        printf("Ban chon sai chuc nang\n");
        goto nhaplai;
    }
    }
}

// ham chuc nang 1: Kiem tra so nguyen
void Kiemtra_SoNguyen()
{

    float songuyen;
    int ghinho = 0;
    printf("Vui long nhap vao mot so");
    scanf("%f", &songuyen);
    // kiem tra so nguyen
    if (songuyen == (int)songuyen)
    {
        printf("Day la so nguyen\n");
        // Kiem so nguyen to

        for (int i = 2; i < songuyen; i++)
        {
            if (((int)songuyen) % i == 0)
            {
                ghinho++; //ghinho = ghinho +1;
            }
        }
        if (ghinho > 1)
        {
            printf("Day khong phai so nguyen to\n");
        }
        else
        {
            printf("Day la so nguyen to\n");
        }
    }
    else
    {
        printf("Day khong phai la so nguyen\n");
        printf("Day khong phai la so nguyen to");
    }
}
// Chuc nang 2: UCLN va BCNN
int UCLN_BCNN(int a, int b)
{

    if (a % b != 0)
        return UCLN_BCNN(b, a % b);
    else
        return b;
}
