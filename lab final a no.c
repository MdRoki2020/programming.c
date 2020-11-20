#include <stdio.h>
struct quantity
{
   int burger;
   int pizza;
   int sandwich;
};
struct info
{
    char name1[30];
    char name2[30];
    char name3[30];
    struct quantity food_value;
};
int main ()
{
    struct info foods_name={"burger","pizza","sandwich"};
    foods_name.food_value.burger=1200;
    foods_name.food_value.pizza=1300;
    foods_name.food_value.sandwich=1400;

    printf("Food List: \n");
    printf("First food name: %s\n",foods_name.name1);
    printf("Second food name: %s\n",foods_name.name2);
    printf("Third food name: %s\n",foods_name.name3);
    printf("\n\n");

    printf("Food quantity: \n");
    printf("quantity of burger: %d\n",foods_name.food_value.burger);
    printf("quantity of pizza: %d\n",foods_name.food_value.pizza);
    printf("quantity of sandwich: %d\n",foods_name.food_value.sandwich);




    getch ();
}
