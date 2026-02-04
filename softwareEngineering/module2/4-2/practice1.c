#include<stdio.h>
#include<conio.h>
int main()
{
  
    int id = 101;
    int pass = 1234;
    int uid,upass;
    
    printf("Enter Your Id");
    scanf("%d",&uid);
    
    printf("Enter Your Password");
    scanf("%d",&upass);
    
    
    if(id==uid && pass==upass)
    {
       printf("Login Success"); 
    }
    else
    {
       printf("Login Fail"); 
    }
    
    
    return 0;
}