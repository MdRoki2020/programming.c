#include <stdio.h>
int main() {
    int y,n, i, flag = 0;
    printf("Enter  integer  number: ");
    scanf("%d", &n);

    for(i=2;i<=n;++i){
        if(y%i==0){
            flag=1;
            break;
        }
    }

    if(y==1){
        printf("1 is not prime nor composite");
    }
    else{
        if(flag==0){
            printf("%d is a prime number",y);
        }
        else{
            printf("%d is not a prime number",y);
        }
    }

    getch ();
}
