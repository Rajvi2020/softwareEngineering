#include<iostream>
using namespace std;
int main(){
 
  int i,j,n=5;
  int b=1;
  for(i=1;i<=n;i++){
    for(j=1;j<=i;j++){
      cout<<b<<" ";
 b+=1;
    }
   
    cout<<endl;
  }


  return 0;
}