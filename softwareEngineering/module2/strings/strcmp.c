#include<stdio.h>
#include<conio.h>
#include<string.h>

int main() 
{
    
    char ch[10]="mango";
    char ch2[10];
    
    printf("What is your fav. fruit");
    scanf("%s",&ch2);
    if(strcmp(ch,ch2)==0){
      printf("correct");
    }
    else{
      printf("incorrect");
    }
     return 0;
}