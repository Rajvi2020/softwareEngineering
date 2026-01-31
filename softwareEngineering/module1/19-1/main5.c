#include<stdio.h>
#include<conio.h>
int  main(){
int sub1=48,sub2=7,sub3=47,sub4=89;
int total=(sub1+sub2+sub3+sub4);
float avg=total/4.0;
float per=(total/400.0)*100;
printf("your avg is: %f\n", avg);

printf("your percentage  is: %f\n", per);
getch();
return 0;
}