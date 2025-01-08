#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main() 
{
   int16_t aAAAAAAAAAAAAAAAA;
   int16_t bBBBBBBBBBBBBBBBB;
   int16_t xXXXXXXXXXXXXXXXX;
   int16_t yYYYYYYYYYYYYYYYY;
   printf("Enter aAAAAAAAAAAAAAAAA:");
   scanf("%hd", &aAAAAAAAAAAAAAAAA);
   printf("Enter bBBBBBBBBBBBBBBBB:");
   scanf("%hd", &bBBBBBBBBBBBBBBBB);
   printf("%d\n", (aAAAAAAAAAAAAAAAA + bBBBBBBBBBBBBBBBB));
   printf("%d\n", (aAAAAAAAAAAAAAAAA - bBBBBBBBBBBBBBBBB));
   printf("%d\n", (aAAAAAAAAAAAAAAAA * bBBBBBBBBBBBBBBBB));
   printf("%d\n", (aAAAAAAAAAAAAAAAA / bBBBBBBBBBBBBBBBB));
   printf("%d\n", (aAAAAAAAAAAAAAAAA % bBBBBBBBBBBBBBBBB));
   xXXXXXXXXXXXXXXXX = (((aAAAAAAAAAAAAAAAA - bBBBBBBBBBBBBBBBB) * 10) + ((aAAAAAAAAAAAAAAAA + bBBBBBBBBBBBBBBBB) / 10));
   yYYYYYYYYYYYYYYYY = (xXXXXXXXXXXXXXXXX + (xXXXXXXXXXXXXXXXX % 10));
   printf("%d\n", xXXXXXXXXXXXXXXXX);
   printf("%d\n", yYYYYYYYYYYYYYYYY);
   system("pause");
    return 0;
}
