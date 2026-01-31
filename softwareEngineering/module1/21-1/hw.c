#include<stdio.h>
int main(){
int pizza,burger,coffee;

printf("enter pizza value");
scanf("%d", &pizza);

printf("enter burger value");
scanf("%d", &burger);

printf("enter coffee value");
scanf("%d", &coffee);

pizza+=burger;
printf("pizza and burger sum is %d\n",pizza);
burger+=coffee;
printf("coffee and burger sum is %d\n",burger);
coffee+=pizza;
printf("pizza and coffee sum is %d\n",coffee);

}