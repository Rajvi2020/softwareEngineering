#include<stdio.h>


  struct student
  {
    int id;
    char name[50];
  } st;
  int main(){
    printf("Enter Your Id: ");
scanf("%d",&st.id);
 printf("Enter Your Name: ");
    scanf("%s",&st.name);

      printf("\n Your id is %d",st.id);
    printf("\n Your name is %s",st.name);
  return 0;
}