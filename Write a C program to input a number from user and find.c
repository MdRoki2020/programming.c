/*#include <stdio.h>
int main ()
{
    int ar[100],n,i;
    printf("How Many Numbers: ");
    scanf("%d",&n);

    printf("Enter Number: ");
    for(i=0;i<n;i++){
        scanf("%d",&ar[i]);
    }

    for(i=n;i>0;i--){
        printf("%d  ",ar[i]);
    }


    getch ();
}*/

#include <stdio.h>
int main ()
{
    int ar[4];
    int n,i;
    printf("How many Numbers: ");
    scanf("%d",&n);
       printf("Normal print: \n");
    for(i=0;i<n;i++){

        printf("%d  ",ar[i]);
    }
    getch ();
}
