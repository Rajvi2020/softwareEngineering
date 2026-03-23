#include <iostream>
using namespace std;
class A
{
public:
  int a=0,b=0;
  void takeinput(int a1, int b1)
  {
    a = a1;
    b = b1;
  }
};

class B : public A
{
public:
  void areaofrec()
  {
    int area = a * b;
    cout << area<<endl;
  }
};
class C : public A
{
public:
  void areatri()
  {
    int area2 = 0.5 * a * b;
    cout << area2<<endl;
  }
};
int main()
{

  int a11, b11;

  cout << "enter a";
  cin >> a11;
  cout << "enter b";
  cin >> b11;

  
  B b;
  b.takeinput(a11,b11);
  
  b.areaofrec();
  C c;
  c.takeinput(a11,b11);
  c.areatri();
  return 0;
}