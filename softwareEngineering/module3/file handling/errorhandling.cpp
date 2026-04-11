#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    fstream file("kishan.txt", ios::in | ios::out | ios::trunc);

    // 1. File open check
    if(!file)
    {
        cout << "File open thai nathi!\n";
        return 0;
    }

    string line;

    cout << "Enter text (type END to stop):\n";

    // 🔷 WRITE PART
    while(true)
    {
        getline(cin, line);

        if(line == "END")
            break;

        file << line << endl;

        // 2. Write error check
        if(file.fail())
        {
            cout << "Write error thayo!\n";
            return 0;
        }
    }

    // Pointer reset for reading
    file.seekg(0);

    cout << "\nFile Content:\n";

    // 🔷 READ PART (FIXED – no extra read)
    while(getline(file, line))
    {
        cout << line << endl;
    }

    // 🔴 IMPORTANT: check error BEFORE clear()
    
     if(file.fail() && !file.eof())
    {
        cout << "\nRead error thayo!\n";
    }
    else
    {
        cout << "\nFile successfully process thai gai\n";
    }

    // 🔷 Now clear flags (EOF etc.)
    file.clear();

    file.close();

    return 0;
}