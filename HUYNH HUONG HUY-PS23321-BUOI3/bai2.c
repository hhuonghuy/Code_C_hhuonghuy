#include <stdio.h>
void main(){
    float chieuDai, chieuRong, chuVi;
    float dienTich;
    printf("Vui long nhap chieu dai: ");
    scanf("%f",&chieuDai);
    printf("Vui long nhap chieu rong: ");
    scanf("%f", &chieuRong);
    chuVi = (chieuDai + chieuRong)*2;
    dienTich = chieuDai * chieuRong;
    printf("Chu vi la: %.1f\n", chuVi);
    printf("Dien tich la: %.1f", dienTich);
}