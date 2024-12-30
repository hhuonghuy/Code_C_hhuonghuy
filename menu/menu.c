#include <stdio.h>
//  Chuc nang 1: Kiem tra so Nguyen
void kiemtra_songuyen()
{
    float so;
    int i;
    int j = 0;
    int tam = 0;
    int nho = 0;
    printf("Vui long nhap so can kiem tra \n");
    scanf("%f", &so); // so=7
    if (so == (int)so)
    {
        printf(" So %f day là so Nguyen \n", so);
        // Xet so nguyen to
        for (i = 2; i < so; i++)
        {
            if ((int)so % i == 0)
            {
                nho++;
            }
        }
        if (nho > 0)
        {
            printf(" Day khong phai la so Nguyen to \n");
        }
        else
        {
            printf(" Day  la so Nguyen to \n");
        }
        // Xét số chinh phương
        for (j = 0; j < so; j++)
        {
            if (j * j == so)
            {
                tam++;
            }
        }
        if (tam > 0)
        {
            printf(" day la so chinh phương");
        }
        else
        {
            printf(" day khong la so chinh phương");
        }
    }
    else
    {
        printf(" So %f  là khong so Nguyen", so);
    }
}
// Chuc nang thu 2: UCLL va BCNN
int UCLL_BCNN(int a, int b)
{
    if (b == 0)
        return a;
    return UCLL_BCNN(b, a % b);
}

// Chuc nang 3: Ting tien karaoke
void tinhtienkaraoke()
{
    int h1, p1, h2, p2;
sai1:
    printf("\n Nhap gio bat dau:");
    scanf("%d", &h1);
    printf("Nhap phut bat dau:");
    scanf("%d", &p1);
    if (h1 > 23 || p1 > 59)
    {
        printf("Ban da nhap sai vui long nhap lai");
        goto sai1;
    }
    else if (h1 < 12)
    {
        printf("Quan chua phuc vu vui long quay lai sau");
        goto sai1;
    }
    else
    {
        printf("Khach hang vao luc: %d : %d", h1, p1);
    }
sai2:
    printf("\n Nhap gio ket thuc:");
    scanf("%d", &h2);
    printf("Nhap phut ket thuc:");
    scanf("%d", &p2);
    if (h2 > 23 || p2 > 59)
    {
        printf("Ban da nhap sai vui long nhap lai");
    }
    else
    {
        printf("Khach hang tra phong luc: %d : %d", h2, p2);
    }

    // tinh tien
    int sophut = ((h2 * 60 + p2) - (h1 * 60 + p1));
    float thanhtien;
    if (sophut < 0)
    {
        printf("\nThoi gian bi sai vui long nhap lai!");
        goto sai2;
    }
    else if (sophut < 180)
    {
        thanhtien = (sophut)*2500;
        printf(" \nSo tien phai tra la: %.f", thanhtien);
    }
    else
    {
        thanhtien = (sophut * 2500) * 0.7;
        printf("\n So tien phai tra la: %.f", thanhtien);
    }
}
// Chuc nang 4: Tinh tien dien
void tinhtiendien()
{
    int dientieuthu = 70;
    float tien;
    if (dientieuthu > 0 && dientieuthu < 50)
    {
        tien = dientieuthu * 1.678;
    }
    else if (dientieuthu > 51 && dientieuthu < 100)
    {
        tien = dientieuthu * 1.734;
    }
    else if (dientieuthu > 101 && dientieuthu < 200)
    {
        tien = dientieuthu * 2.014;
    }
    else if (dientieuthu > 201 && dientieuthu < 300)
    {
        tien = dientieuthu * 2.536;
    }
    else if (dientieuthu > 301 && dientieuthu < 400)
    {
        tien = dientieuthu * 2.834;
    }
    else if (dientieuthu > 401)
    {
        tien = dientieuthu * 2.927;
    }
}
// Chuc nang 6: Tinh lai suat ngan hang
void laisuatnganhang()
{
    printf("Lai suat ngan hang \n");
    int tienVay = 12000000;
    int tienLai;
    int tienGoc = tienVay / 12;
    int tienTra;
    int tienCon;
    tienCon = tienLai;
    for (int i = 1; i <= 12; i++)
    {
        tienLai = tienCon * 0.05;
        tienTra = tienGoc + tienLai;
        tienCon = tienCon - tienGoc;
        printf("%2d | ", i);
        printf("%10d | ", tienLai);
        printf("%10d | ", tienGoc);
        printf("%10d | ", tienTra);
        printf("%10d | ", tienCon);
    }
}
// Chuong trinh
void main()
{
    // Xây dựng menu
    int chucnang;
    int a, b;
    int ketqua, ketqua1;
nhaplai:
    printf("Chuc nang 1: Kiem tra so nguyen \n");
    printf("Chuc nang 2: Tim UCLL va BCNN \n");
    printf("Chuc nang 3: Tinh tien karaoke \n");
    printf("Chuc nang 4: Tinh tien dien \n");
    printf("Chuc nang 6: Lai suat ngan hang \n");
    printf("Chuc nang 8: Sap xep thong tin sinh vien \n");
    printf("Chuc nang 9: Gamepoly \n");
    printf("Vui long chon chuc nang: \n");
    scanf("%d", &chucnang);
    switch (chucnang)
    {

    case 1:
    {
        kiemtra_songuyen();
        goto nhaplai;
    }
    case 2:
    {
        printf(" Vui long nhap a:= \n");
        scanf("%d", &a);
        printf(" Vui long nhap b:= \n");
        scanf("%d", &b);
        ketqua = UCLL_BCNN(a, b);
        printf(" UCLN la: %d \n", ketqua);
        ketqua1 = (a * b) / UCLL_BCNN(a, b);
        printf(" BCNN la: %d", ketqua1);
        goto nhaplai;
    }
    case 3:
    {
        // kiemtra_songuyen();
        printf("Chuc nang 3: Tinh tien karaoke \n");
        goto nhaplai;
    }
    case 4:
    {
        // kiemtra_songuyen();
        printf("Chuc nang 4: Tinh tien dien \n");
        goto nhaplai;
    }
    case 6:
    {
        printf("Chuc nang 6: Tinh lai suat ngan hang \n");
        laisuatnganhang();
        goto nhaplai;
    }
    }
}