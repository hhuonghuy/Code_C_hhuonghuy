#include <stdio.h>
void main()
{
    struct sinhvien
    {
        char ten[70];
        float diemtb;
    };
    int i, j, n;
    printf("Hay nhap so sinh vien");
    scanf("%d", &n);
    struct sinhvien danhsach_sv[50];
    for (i = 0; i < n; i++)
    {
        fflush(stdin);
        printf("Hay nhap ten sinh vien thu %d", i);
        gets(danhsach_sv[i].ten);
        fflush(stdin);
        printf("Hay nhap diem trung binh cua sinh vien thu %d", i);
        scanf("%f", &danhsach_sv[i].diemtb);
    }
    struct sinhvien t;
    {
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (danhsach_sv[i].diemtb < danhsach_sv[j].diemtb)
            {
                t = danhsach_sv[i];
                danhsach_sv[i] = danhsach_sv[j];
                danhsach_sv[j] = t;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {

        if (danhsach_sv[i].diemtb >= 9)
        {
            printf("Xuat Sac \n");
        }
        else if (danhsach_sv[i].diemtb >= 8)
        {
            printf("Gioi \n");
        }
        else if (danhsach_sv[i].diemtb >= 6.5)
        {
            printf(" Kha \n");
        }
        else if (danhsach_sv[i].diemtb >= 5)
        {
            printf("Trung Binh \n");
        }
        else
        {
            printf("Yeu");
        }
    }
    for (int i = 0; i < n; i++)
    {

        printf("%f", danhsach_sv[i].diemtb);
    }
}