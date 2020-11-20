#include <stdio.h>

int main()
{
float a;

printf("Enter your CGPA");

scanf("%f",&a);

if(a>=3.8 && a<=4.0){
printf("Excellent");
}


else if(a>3.6 && a<3.8)
{
printf("Best");
}

else if(a>=3.4 && a<3.6)
{
printf("Good");
}

else
{
printf("Average");
}
return 0;
}
