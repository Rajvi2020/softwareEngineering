#include<stdio.h>
#include<string.h>
int main(){


  
  int choice;
  char  name[50];
  char password[50];
  char email[50];
  char lemail[50], lpassword[50];
  //1register
 
  printf("enter chice");
  scanf("%d",&choice);
  if(choice==1){
     FILE *fp;
  fp=fopen("..//rajvi.txt","a");
     printf("enter name");
     scanf("%s",name);
     printf("enter email");
     scanf("%s",email);
     printf("enter password");
     scanf("%s",password);
     fprintf(fp,"%s %s %s" ,name, email ,password);
printf("Registration Successful!\n");
     fclose(fp);
  }
else if(choice==2){
  FILE *fp;
  fp=fopen("..//rajvi.txt","r");
    printf("Email: ");
        scanf("%s", lemail);

        printf("Password: ");
        scanf("%s", lpassword);

        fscanf(fp, "%s %s %s", name, email, password);
        fclose(fp);
        if(strcmp(email,lemail)==0 && strcmp(password,lpassword)==0){
          printf("success");


        }
        else{
          pgrintf("invalid");
        }
  }


  return 0;
}

