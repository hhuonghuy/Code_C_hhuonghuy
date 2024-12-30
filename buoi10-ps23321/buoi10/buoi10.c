#include <stdio.h>
int diemTB(float a, float b)
{
    float diemTB = 0;
    diemTB = (a + b) / 2;
    if (diemTB >= 9)
    {
        printf("Hoc luc Xuat Sac");
        return 0;
    }
    if (diemTB >= 8 && diemTB < 9)
    {
        printf("Hoc luc Gioi");
        return 0;
    }
    if (diemTB >= 6.5 && diemTB < 8)
    {
        printf("Hoc luc Kha");
        return 0;
    }
    if (diemTB >= 5.5 && diemTB < 6.5)
    {
        printf("Hoc luc Trung binh");
        return 0;
    }
    if (diemTB >= 3.5 && diemTB < 5)
    {
        printf("Hoc luc Yeu");
        return 0;
    }
    if (diemTB < 3.5)
    {
        printf("Hoc luc Kem");
        return 0;
    }
}
void main()
{
     float a, b, diemtb;
     printf("nhap diem a");
     scanf("%f", &a);
     printf("nhap diem b");
     scanf("%f", &b);
     printf("diem tb la: %f", (a+b)/2);
     //diemtb ( &a, &b);

 }
