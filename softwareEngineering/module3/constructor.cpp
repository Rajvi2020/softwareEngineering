#include <iostream>
using namespace std;

class student
{
public:
    int id;
    string name;

    student(int i, string n)
    {
        id = i;
        name = n;
    }

    void display()
    {
        cout << id << " " << name << endl;
    }
};

int main()
{
    int j;
    cout << "Enter number of students: ";
    cin >> j;

    int arr[j];
    string names[j];

    for (int i = 0; i < j; i++)
    {
        cout << "Enter id and name: ";
        cin >> arr[i] >> names[i];
    }

    for (int i = 0; i < j; i++)
    {
        student st(arr[i], names[i]);
        st.display();
    }

    return 0;
}