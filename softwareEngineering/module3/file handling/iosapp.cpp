#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream fout("..//apptest.txt",ios::app);
    string line;
    cout<<"enter text";
    getline(cin,line);
    fout<<"\n"<<line<<endl;
    fout.close();
    //read
    ifstream fin("..//apptest.txt");
    cout<<"file content";
    while(getline(fin,line)){
      cout<<line<<endl;
    }
    fin.close();


    return 0;
}