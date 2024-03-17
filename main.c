#include <stdio.h>
#include <math.h>
int main() {
   int p,r,n,y;

   printf("Enter principal invested(p): ");
   scanf("%d",&p);

   printf("Enter interest rate(r): ");
   scanf("%d",&r);

   printf("Enter number of years(n): ");
   scanf("%d",&n);

   y = p*pow(1+r,n);

   printf("Total amount(y): %d",y);
   return 0;
}
