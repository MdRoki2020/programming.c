#include<stdio.h>
int main()

{
float a ;
printf("enter your CGPA");
scanf("%f",&a);

if(a>=3.8&&a<=4.0){
    printf("excellent");
}

else if(a>3.6&&a<3.8){
    printf("best");
}
else if(a>=3.4&&a<=3.6){
    printf("good");
}

return 0;
}
