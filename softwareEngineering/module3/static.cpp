#include<iostream>
using namespace std;
class counter{
   public:
   static int count;
   counter()
   {

    count++;
    cout<<count<<endl;
   }


};
int counter::count=0;
int main(){
counter c1 = counter();
counter c2 = counter();
counter c3 = counter();

  
return 0;
}