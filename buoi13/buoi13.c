#include <stdio.h>
void main()
{
    char s[100];
    printf("Xin moi nhap vao mot chuoi: ");
    gets(s);
    int i = 0;
    int n = 0;
    int p = 0;
    while (s[i++] != '\0')
    {
        if (s[i] == 'a' || s[i] == 'i' || s[i] == 'e' || s[i] == 'u' || s[i] == 'o')
        {
            n++;
        }
        else 
        {
            p++;
        }
    }
    printf("chuoi '%s' nguyen am la %d phu am la %d", s, n, p);
}