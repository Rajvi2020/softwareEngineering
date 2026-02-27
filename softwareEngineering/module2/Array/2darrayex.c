//single dimensional array // one dimensional array
#include<stdio.h>
#include<conio.h>
int main()
{
        
        int marks[3][3]={{1,2,3},{4,5,6},{7,8,9}};
        int i,j;
        
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                printf("[%d] [%d] =  %d",i,j,marks[i][j]);
            }
            printf("\n");
        }
        
        
        
  
      return 0;
}