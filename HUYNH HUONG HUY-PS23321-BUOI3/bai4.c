#include <stdio.h>
void main (){
    float toan, ly, hoa;
    printf("Vui long nhap diem mon toan: ");
    scanf("%f", &toan);
    printf("Vui long nhap diem mon ly: ");
    scanf("%f", &ly);
    printf("Vui long nhap diem mon hoa: ");
    scanf("%f", &hoa);
    printf("diem trung binh la: %2.f\n", (toan * 3 + ly * 2 + hoa) / 6);
}