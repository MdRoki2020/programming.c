#include<stdio.h>
fahrenheit (int c){
return(c*9/5)+32;
}

celsius (int f){
return (f - 32)*5/9;
}
int main ()
{
    printf("fahrenheit %d\n",fahrenheit(10));
       printf("celsius %d\n",celsius(10));


}
