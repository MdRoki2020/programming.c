#include <stdio.h>
int main ()

{
int i;
for(i=0;i<=10;i++){

    if(i%2==0){
        printf("coding\n");
    }
    else if(i%7==0){
        break;
    }
    else{
        printf("fun\n");
        continue;
    }
}


    return 0;
}
