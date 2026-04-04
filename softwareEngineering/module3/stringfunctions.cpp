#include <iostream>  
#include <cstring>  
using namespace std;  

int main ()  
{  
    char ch[] = "shubham";
    char ch2[] = "tops";
    char ch3[]="";
    char ch4[] = "tech";
    cout<<strcmp(ch2,ch)<<endl;
    cout<<strlen(ch2)<<endl;
    strcpy(ch3,ch2);
    cout<<ch3<<endl;
    cout<<strcat(ch3,ch4)<<endl;
  return 0;  
}  