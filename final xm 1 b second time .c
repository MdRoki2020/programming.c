#include <stdio.h>
int main()
{
   int N;
   printf("Enter number of Days:");
   scanf("%d",&N);
   printf("enter number of Amount:");
       scanf("%d",&N);
   if(N<=100)
   {
	printf("roadside Food");
   }
   else if(250<=N && N<350)
   {
	printf("fast Food");
   }
   else if(N>=350)
   {
	printf("Kacchi");
   }
   else
   {
	printf("BFC");
   }
   getch ();
}
