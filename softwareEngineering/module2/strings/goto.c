#include <stdio.h>

int main() 
{
     int n, sum = 0, i = 0 ;

     printf ("Enter a number") ;
     scanf ("%d", &n); 
     tops:
     i++;
     sum+=i;
     if(i<n)
     goto tops;
     printf("%d",sum);

     return 0;
}