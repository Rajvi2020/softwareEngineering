#include<iostream>
using namespace std;
int main(){
  int marks;
cout<<"enter student marks"<<endl;
cin>>marks;
if(marks>=90 && marks<=100){
  cout<<"A+ grade";

}
else if(marks >= 80)
    {
        cout << "Grade : A";
    }

    else if(marks >= 80)
    {
        cout << "Grade : A";
    }

    else if(marks >= 70)
    {
        cout << "Grade : B";
    }

    else if(marks >= 60)
    {
        cout << "Grade : C";
    }

    else if(marks >= 50)
    {
        cout << "Grade : D";
    }

    else if(marks >= 0)
    {
        cout << "Grade : Fail";
    }

    else
    {
        cout << "Invalid Marks Entered";
    }


return 0;
}