#include <stdio.h>
void main()
{
    char userSys[] = "Oma ken";
    char passSys[] = "huy2504";
    char user[100];
    char pass[100];
    //input
    printf("Xin moi onii-chan nhap ten dang nhap: ");
    gets(user);
    printf("Xin moi onii-chan nhap mat khau: ");
    gets(pass);
    if (strcmp(user, userSys) == 0 && strcmp(pass, passSys) == 0)
    {
        printf("Onii-chan da dang nhap thanh cong");
    }
    else
    {
        printf("Onii-chan da dang nhap that bai");
    }
}