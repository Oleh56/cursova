#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main() 
{
   int16_t aAAAAAAAAAAAAAAAA, aAAAAAAAAAAAAAAA2, bBBBBBBBBBBBBBBBB, xXXXXXXXXXXXXXXXX, cCCCCCCCCCCCCCCC1, cCCCCCCCCCCCCCCC2;
   printf("Enter aAAAAAAAAAAAAAAAA:");
   scanf("%hd", &aAAAAAAAAAAAAAAAA);
   printf("Enter bBBBBBBBBBBBBBBBB:");
   scanf("%hd", &bBBBBBBBBBBBBBBBB);
   for (int16_t aAAAAAAAAAAAAAAA2 = aAAAAAAAAAAAAAAAA; aAAAAAAAAAAAAAAA2 <= bBBBBBBBBBBBBBBBB; aAAAAAAAAAAAAAAA2++)
   printf("%d\n", aAAAAAAAAAAAAAAA2 * aAAAAAAAAAAAAAAA2);
   for (int16_t aAAAAAAAAAAAAAAA2 = bBBBBBBBBBBBBBBBB; aAAAAAAAAAAAAAAA2 >= aAAAAAAAAAAAAAAAA; aAAAAAAAAAAAAAAA2--)
   printf("%d\n", aAAAAAAAAAAAAAAA2 * aAAAAAAAAAAAAAAA2);
   xXXXXXXXXXXXXXXXX = 0;
   cCCCCCCCCCCCCCCC1 = 0;
   while (cCCCCCCCCCCCCCCC1 < aAAAAAAAAAAAAAAAA)
   {
   {
   cCCCCCCCCCCCCCCC2 = 0;
   while (cCCCCCCCCCCCCCCC2 < bBBBBBBBBBBBBBBBB)
   {
   {
   xXXXXXXXXXXXXXXXX = xXXXXXXXXXXXXXXXX + 1;
   cCCCCCCCCCCCCCCC2 = cCCCCCCCCCCCCCCC2 + 1;
   }
   }
   cCCCCCCCCCCCCCCC1 = cCCCCCCCCCCCCCCC1 + 1;
   }
   }
   printf("%d\n", xXXXXXXXXXXXXXXXX);
   xXXXXXXXXXXXXXXXX = 0;
   cCCCCCCCCCCCCCCC1 = 1;
   do
   {
   cCCCCCCCCCCCCCCC2 = 1;
   do
   {
   xXXXXXXXXXXXXXXXX = xXXXXXXXXXXXXXXXX + 1;
   cCCCCCCCCCCCCCCC2 = cCCCCCCCCCCCCCCC2 + 1;
   }
   while (!(cCCCCCCCCCCCCCCC2 > bBBBBBBBBBBBBBBBB));
   cCCCCCCCCCCCCCCC1 = cCCCCCCCCCCCCCCC1 + 1;
   }
   while (!(cCCCCCCCCCCCCCCC1 > aAAAAAAAAAAAAAAAA));
   printf("%d\n", xXXXXXXXXXXXXXXXX);
   system("pause");
    return 0;
}
