#include <stdio.h>
int main()
{
   int N;
   printf("Enter number of days:");
   scanf("%d",&N);
   printf("enter number of amount:");
       scanf("%d",&N);
   if(N<=100)
   {
	printf("Roadside Food");
   }
   else if(250<=N && N<350)
   {
	printf("Fast Food");
   }
   else if(N>=350)
   {
	printf("Kacchi");
   }
   else
   {
	printf("BFC");
   }
   return 0;
}
