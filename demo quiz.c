#include <stdio.h>
int main ()
{
int n;

Printf("Enter An Integer Number: ");
scanf("%d",&n);

if(n%2==!0){
    printf("It's odd\n");
}
else if(n>40){
    printf("Greater than 40");
}
else if(n<40){
    printf("Less than 40");
}
else if(n%2==0){
    printf("It's even");
}
    return 0;
}
