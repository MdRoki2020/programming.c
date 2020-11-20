#include <stdio.h>
#define Max 9
int main ()
{
    int ar[Max],n,i;
    int temp;

    printf("Enter numbers of elements: ");
    scanf("%d",&n);

    //if(n%2!=0);
    //{
     //   printf("total number of elements should be even.");
      //  return 1;

    //}

    printf("Enter Array elements:\n");
    for(i=0;i<n;i++)
    {
        printf("enter elements %d:\n",i+1);
        scanf("%d",&ar[i]);
    }

    for(i=0;i<n;i+=2)
    {
        temp=ar[i];
        ar[i]=ar[i+1];
        ar[i+1]=temp;
    }

    printf("\n Array elements after swaping adjacent elements: \n");
    for(i=0;i<n;i++){
        printf("%d\n",ar[i]);
    }






    getch ();
}
