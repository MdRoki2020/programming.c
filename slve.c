///4*4+10*6+16*8+......+n  /// sum=sum+i*6-2  /// sum=sum+i*2+2  /// sum=sum+(i*6-2)*(i*2+2)
#include <stdio.h>
int main ()
{
    int n,i,sum=0;
    printf("Enter Number: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
       sum=sum+(i*6-2)*(i*2+2);
    }
    printf("4*4+10*6+16*8+......+n= %d",sum);


    return 0;
}
