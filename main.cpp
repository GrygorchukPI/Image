#include <iostream>
#include <stdio.h>

#include "Image.h"
#include "BMP.h"


int main()
{
    printf("BEGIN - Image.\n");

    Image img;
    BMP bmp;
    bmp.ReadFile(img,"..//1.bmp");
    bmp.WriteFile(img,"..//YO.bmp");

    printf("END - Image.\n");
    return 0;
}
