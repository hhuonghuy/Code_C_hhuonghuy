#include <stdio.h>
void main()
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