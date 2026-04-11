#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream fout("..//test1.txt");   // file open for writing
    string line;

    cout << "Enter text (type END to stop):\n";

    // 🔷 Writing to file
    while(true)
    {
        getline(cin, line);

        if(line == "END")
            break;

        fout << line << endl;   // file ma store
    }

    fout.close();   // file close

    // 🔷 Reading from file
    ifstream fin("..//test1.txt");

    cout << "\nFile content:\n";

    while(getline(fin, line))
    {
        cout << line << endl;   // print file data
    }

    fin.close();

    return 0;
}