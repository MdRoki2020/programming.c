#include <stdio.h>
int main ()

{
    int ft_marks[5]={98,88,78,88,79},st_marks[5]={79,88,98,88,76},final_marks[5]={79,87,89,91,98};
    int i;
    double total_marks[5];
        for(i=0;i<5;i++){
        total_marks[i]=ft_marks[i]/4.0+st_marks[i]/4.0+final_marks[i]/2.0;
    }
    for(i=1;i<=5;i++){
        printf("Roll Number:%d\t total_marks:%.2lf\n",i,total_marks[i-1]);
    }



    getch ();
}
