#include <iostream>
using namespace std;
 int  factorial(int n){
  int fact;
    if(n<0){
      cout<<"wrong input";
      return 0;
    }
    else if(n==0 ||  n==1){
      return 1;
    }
    else{
      fact=n*factorial(n-1);
      return fact;
    }
  }
int main(){
 
 int n;
   cout<<"enter the number";
   cin>>n;
   
    int result=factorial(n);
   if(result!=0){
     cout << "Factorial of " << n << " is " << result << endl;
   }

  return 0;
}