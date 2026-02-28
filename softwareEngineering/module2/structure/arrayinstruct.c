// #include<stdio.h>


//   struct student
//   {
//     int id;
//     char name[50];
//   } st[50];
//   int main(){
//        int i,num;
    
//     printf("Enter Number of students:");
//     scanf("%d",&num);
//     for( i=0;i<num;i++){
//   printf("Enter Your Id: ");
// scanf("%d",&st[i+1].id);
//  printf("Enter Your Name: ");
//     scanf("%s",&st[i+1].name);
//     }
//   for(i=0;i<num;i++){

//       printf("\n Your id is %d",st[i+1].id);
//     printf("\n Your name is %s",st[i+1].name);
//   }

//   return 0;
// }
#include<stdio.h>
#include<conio.h>

struct student
{
  
  int id;
  char name[50];
  
}st[50];
int main()
{
    int i,num;
    
    printf("Enter Number of students:");
    scanf("%d",&num);
    
    for(i=0;i<num;i++)
    {
        printf("Enter id");
        scanf("%d",&st[i].id);
    
        printf("Enter name");
        scanf("%s",&st[i].name);
    }
    
     for(i=0;i<num;i++)
    {
          printf("\n your id is %d and Your name is %s ",st[i].id,st[i].name);
    
    }
  
  
    return 0;
}
