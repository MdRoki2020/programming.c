#include<stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr1,*ptr2,fnum,snum;
    ptr1=&fnum;
    ptr2=&snum;

    printf("please enter first number: ");
    scanf("%d",ptr1);

    printf("please enter second number: ");
    scanf("%d",ptr2);

    if(*ptr1>*ptr2){
        printf("maximum number is: %d",*ptr1);
    }
    else{
        printf("maximum number is: %d",*ptr2);
    }

    return 0;
}
