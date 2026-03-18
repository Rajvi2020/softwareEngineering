#include<iostream>
using namespace std;

class student
{
    public:
    int id;
    string name;
};

int main()
{
    student st;
    st.id=101;
    st.name="abcd";
    cout<<st.id<<" "<<st.name<<endl;
    return 0;
}