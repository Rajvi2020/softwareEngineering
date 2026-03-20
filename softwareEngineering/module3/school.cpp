#include<iostream>
using namespace std;
class school
{
  public:
  int s_id;
  int rollno;
  int marks;
  int p_id;
};
class student:public school
{

};
class parents:public school{

};

int main(){


  return 0;
}
