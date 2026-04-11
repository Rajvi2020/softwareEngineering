#include<iostream>
#include<fstream>
using namespace std;
int main(){
  ifstream fin;
  fin.open("..//test.txt");
  string st;
  //fin>>st;
  getline(fin,st);
  cout<<st;
  fin.close();
  
  return 0;
}