#include<iostream>
#include<fstream>
using namespace std;
int main(){
  ofstream fout;
  fout.open("..//text.txt");
  string name;
  cout<<"enter your name";
  getline(cin,name);
  //cin>>name;
  fout<<name;
  fout.close();
  ifstream fin;
  fin.open("..//text.txt");
  string st;
  getline(fin,st);
  cout<<st;
  
  return 0;
}