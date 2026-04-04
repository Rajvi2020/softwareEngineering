#include<iostream>
using namespace std;
class Account{
public:
int accno=100;
string name="tops";
static int count;
Account(int accno,string name){
  this->accno=accno;
  this->name=name;
  count++;
}
  void display()
    {
        cout<<accno<<" "<<name<<endl;
    }
    


};
int Account::count=0;





int main(){
  Account a1=Account(101,"rajvi");
  Account a2=Account(102,"kiran");
  a1.display();
  a2.display();

  cout<<"Total Accounts are: "<<Account::count<<endl;
  return 0;
}