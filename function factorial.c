#include <stdio.h>
my_name(int a){

int sum=1,i;

for(i=1;i<=a;i++){
    sum=sum*i;
}

printf("factorial: %d\n",sum);

}
int main ()
{
    int a;
    printf("Enter Number: ");
    scanf("%d",&a);
    my_name(a);
    my_name(a);

    getch ();
}
