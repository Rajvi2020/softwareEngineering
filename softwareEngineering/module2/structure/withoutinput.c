#include<stdio.h>
#include<conio.h>
struct address
{
     char city[50];
     int zip;
};
struct student
{
    char name[50];  
    int age;
    struct address add; //nested structure
}s1;

int main()
{
   struct student s1={"abc",21,{"rajkot",360001}};
       
    printf("\n Name is %s",s1.name);
    printf("\n Age is %d",s1.age);
    printf("\n City is %s",s1.add.city);
    printf("\n Zip is %d",s1.add.zip);
    

    
  
    return 0;
}