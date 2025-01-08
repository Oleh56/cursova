#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main() 
{
   int16_t aAAAAAAAAAAAAAAAA;
   int16_t bBBBBBBBBBBBBBBBB;
   int16_t cCCCCCCCCCCCCCCCC;
   printf("Enter aAAAAAAAAAAAAAAAA:");
   scanf("%hd", &aAAAAAAAAAAAAAAAA);
   printf("Enter bBBBBBBBBBBBBBBBB:");
   scanf("%hd", &bBBBBBBBBBBBBBBBB);
   printf("Enter cCCCCCCCCCCCCCCCC:");
   scanf("%hd", &cCCCCCCCCCCCCCCCC);
   if (aAAAAAAAAAAAAAAAA > bBBBBBBBBBBBBBBBB) 
   {
   if (aAAAAAAAAAAAAAAAA > cCCCCCCCCCCCCCCCC) 
   {
   goto Abigger;
   }
   else
   {
   printf("%d\n", cCCCCCCCCCCCCCCCC);
   goto OutofIF;
Abigger:
   printf("%d\n", aAAAAAAAAAAAAAAAA);
   goto OutofIF;
   }
   }
   if (bBBBBBBBBBBBBBBBB < cCCCCCCCCCCCCCCCC) 
   {
   printf("%d\n", cCCCCCCCCCCCCCCCC);
   }
   else
   {
   printf("%d\n", bBBBBBBBBBBBBBBBB);
   }
OutofIF:
   if (((aAAAAAAAAAAAAAAAA == bBBBBBBBBBBBBBBBB && aAAAAAAAAAAAAAAAA == cCCCCCCCCCCCCCCCC) && bBBBBBBBBBBBBBBBB == cCCCCCCCCCCCCCCCC)) 
   {
   printf("%d\n", 1);
   }
   else
   {
   printf("%d\n", 0);
   }
   if (((aAAAAAAAAAAAAAAAA < 0 || bBBBBBBBBBBBBBBBB < 0) || cCCCCCCCCCCCCCCCC < 0)) 
   {
   printf("%d\n", (0 - 1));
   }
   else
   {
   printf("%d\n", 0);
   }
   if (!(aAAAAAAAAAAAAAAAA < (bBBBBBBBBBBBBBBBB + cCCCCCCCCCCCCCCCC))) 
   {
   printf("%d\n", 10);
   }
   else
   {
   printf("%d\n", 0);
   }
   system("pause");
    return 0;
}
