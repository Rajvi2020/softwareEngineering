#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    fstream file("..//rajvi.txt", ios::in | ios::out | ios::trunc);

    string line;

    cout << "Enter text (type END to stop):\n";

    // 🔷 Write (multiline)
    while(true)
    {
        getline(cin, line);

        if(line == "END")
            break;

        file << line << endl;
    }

    // 🔷 Read mate pointer reset
    file.seekg(0);

    cout << "\nFile Content:\n";

    // 🔷 Read
    while(getline(file, line))
    {
        cout << line << endl;
    }

    file.close();

    return 0;
}