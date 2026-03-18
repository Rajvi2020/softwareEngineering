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
    st.name="Rajvi";
    cout<<st.id<<" "<<st.name<<endl;
    
    student st2;
    st2.id=102;
    st2.name="Shubham";
    cout<<st2.id<<" "<<st2.name<<endl;
    
    student st3;
    st3.id=103;
    st3.name="Dhyey";
    cout<<st3.id<<" "<<st3.name<<endl;
    return 0;
}