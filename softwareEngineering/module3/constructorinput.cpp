#include<iostream>
using namespace std;
class student{
   public:
   int id;
   string name;
   student(int i,string n){
        id=i;
        name=n;
   }
   void display(){
       cout<<"id: "<<id<<" name: "<<name<<endl;
   }
};
int main(){
  student st= student(101,"rajvi");
  st.display();
  student st =
  return 0;
}