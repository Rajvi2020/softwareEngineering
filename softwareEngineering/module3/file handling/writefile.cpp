#include<iostream>
#include<fstream>
using namespace std;
int main(){
  ofstream fout;
  fout.open("..//test.txt");
  fout<<"hello rajvi";
  fout.close();
  
  return 0;
}