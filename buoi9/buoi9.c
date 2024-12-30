
#include <stdio.h>
// Xay dung ham gia tri lon nhat 
int max(int a, int b, int c)
{
    int max = a;
    if(b > max)
    {
        max = b;
    }
    if(c > max)
    {
        max = c;
    }
    return max;
}
    int main()
    {
        printf("Tim max a, b, c \n");
        int a, b, c;
        int sln;
        a = 3, b = 6, c = 9;
        sln = max(a,b ,c);
        printf("So lon nhat la: %d", sln);
    }


